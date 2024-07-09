#include "VM.h"
#include "Object.h"

// reload new opt
void *object::operator new(size_t size)
{
    return GetHeapInstance()->Alloc(size);
}

VM::VM()
{
    std::cout << "vm started!" << std::endl;
    //  g_heapInstance = new Heap(MAX_HEAP);
}
void VM::freeVM()
{
    stackSize = 0;
    gc();
}

VM::~VM()
{
    std::cout << "vm end!" << std::endl;
}

void VM::pushInt(int value)
{
    object *obj = new object();
    stack[stackSize] = obj;
    obj->value = value;
    stackSize++;
    objectSize++;
    obj->next = listHead;
    listHead = obj;
    obj->type = typeInfo::INT;
}

object *VM::push(object *value)
{
    assert1(stackSize < MAX_STACK, "stack overflow");
    object *obj = new object();
    stack[stackSize] = obj;
    obj->ref = value;
    stackSize++;
    objectSize++;
    obj->next = listHead;
    listHead = obj;
    obj->type = typeInfo::REF;
    return obj;
}

object *VM::pop()
{
    assert1(stackSize > 0, "stack overflow");
    return stack[stackSize--];
}

void VM::gc()
{
    mark();
    sweep();
}

void VM::mark()
{
    for (int i = 0; i < stackSize; i++)
    {
        trace(stack[i]);
    }
}

void VM::sweep()
{
    object **obj = &listHead;
    // COMMENT: why not use listHead directly?
    //  Using object** obj = &listHead allows you to modify the original linked list through indirect reference (through pointer). This is because you can change the pointer pointed to by obj itself, thereby changing the structure of the linked list.
    while (*obj != nullptr)
    {
        // if the obj was not marked,remove it from list
        if ((*obj)->marked == 0)
        {

            object *temp = *obj;
            *obj = temp->next;
            delete temp;
            objectSize--;
        }
        else
        {
            (*obj)->marked = 0;
            obj = &(*obj)->next;
        }
    }
}

void VM::trace(object *obj)
{
    if (obj == nullptr)
    {
        // TODO:exception
        return;
    }
    if (obj->marked)
    {
        return;
    }
    obj->marked = 1;
    if (obj->type == typeInfo::REF && obj->ref != nullptr)
    {
        trace(obj->ref);
    }
}

void VM::assert1(int condition, const char *message)
{

    if (!condition)
    {
        std::cout << message << std::endl;
        exit(1);
    }
}