#include "Heap.h"
#include <iostream>

// reload new opt
void *object::operator new(size_t size)
{
    size = size;
    return GetHeapInstance()->Alloc(size);
}

Space::Space(int size)
{
    size = size;
    startAddr = (char *)malloc(size);
    allocAddr = (char *)(((uintptr_t)(startAddr + 15)) & -16);

    capacity = size;
    endAddr = startAddr + size;
}
Space::~Space()
{
    size = 0;
    if (startAddr != nullptr)
    {
        free(startAddr);
    }
    allocAddr = 0;
    capacity = 0;
    endAddr = 0;
}
bool Space::isAllocAvaliable(int size)
{
    return (capacity >= size);
}
void *Space::Alloc(int size)
{
    allocAddr += size;
    capacity -= size;
    return allocAddr;
}
Heap::Heap(int size)
{
    heapSpace1 = new Space(size);
    heapSpace2 = new Space(size);
    metaSpace = new Space(size / 16);
    fromSpace = heapSpace1;
    toSpace = heapSpace2;
}
Heap::~Heap()
{
    if (heapSpace1 != nullptr)
    {
        delete heapSpace1;
    }
    if (heapSpace2 != nullptr)
    {
        delete heapSpace2;
    }
    if (metaSpace != nullptr)
    {
        delete metaSpace;
    }
    fromSpace = nullptr;
    toSpace = nullptr;
}
void* Heap::tryAllocFromBuffer(int size)
{
    if (allocBuffer.size() > 0 && allocBuffer.back()->size >= size)
    {
        void *addr = allocBuffer.back();
        allocBuffer.pop_back();
        return addr;
    }
    return nullptr;
}

void *Heap::Alloc(int size)
{
    size = (size + 7) & -8; // align to 8 bytes

    // try to alloc from allocBuffer
    void *addr = tryAllocFromBuffer(size);
    if (addr == nullptr)
    {
        // if can't alloc from allocBuffer, try to alloc from heap
        addr = fromSpace->Alloc(size);
        if (addr == nullptr)
        {
            // if can't alloc from heap, need to GC
            //GC();
            addr = fromSpace->Alloc(size);
        }
    }
    return addr;

    // alloc for copy gc
    // if (fromSpace->isAllocAvaliable(size))
    // {
    //     return fromSpace->Alloc(size);
    // }
    // else
    // {
    //     // can't allocate in from space, need to GC
    //     GC();
    //     if (fromSpace->isAllocAvaliable(size))
    //     {
    //         return fromSpace->Alloc(size);
    //     }
    //     // still can't allocate, allocate failed
    //     return nullptr;
    // }
}

void Heap::forEachObject()
{
    char *curAddr = fromSpace->startAddr;
    while (curAddr < fromSpace->allocAddr)
    {
        object *obj = reinterpret_cast<object *>(curAddr);
        if (obj->marked == 0)
        {
            free(obj);
        }
        curAddr += obj->size;
    }
}

void Heap::free(object *ptr)
{
    allocBuffer.push_back(ptr);
}
