#include "Heap.h"
#include <iostream>
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
void *Heap::Alloc(int size)
{
    size = (size + 7) & -8; // align to 8 bytes
    if (fromSpace->isAllocAvaliable(size))
    {
        return Alloc(size);
    }
    else
    {
        // can't allocate in from space, need to GC
        //GC();
        if (fromSpace->isAllocAvaliable(size))
        {
            return Alloc(size);
        }
        // still can't allocate, allocate failed
        return nullptr;
    }
}

