#include "VM.h"
#include "Object.h"



VM::VM()
{
    std::cout << "vm started!" << std::endl;
    //  g_heapInstance = new Heap(MAX_HEAP);
}
void VM::freeVM()
{
    stackSize = 0;
   // gc();
}

VM::~VM()
{
    std::cout << "vm end!" << std::endl;
}

void VM::pushInt(int value)
{

    //object *obj = new object();
    stack[stackSize] = reinterpret_cast<object*>(value);
    //obj->value = value;
    stackSize++;
    //objectSize++;
    //obj->next = listHead;
    //listHead = obj;
    //obj->type = typeInfo::INT;
}

void VM::push(object *obj)
{
    assert1(stackSize < MAX_STACK, "stack overflow");
    stack[stackSize] = obj;
    rootSet.push(obj);
    stackSize++;
    //obj->next = listHead;
    //listHead = obj;
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
    printf("marking...\n");
    while(!rootSet.empty())
    {
        trace(rootSet.top());
        rootSet.pop();
    }
}

void VM::sweep()
{
    printf("sweeping...\n");
    //visitor for each object in heap
    // for mark-sweep, we should traverse the entire heap
    // for copy gc ,we only  need to check until currentAddr 
    GetHeapInstance()->forEachObject();
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
    //printf("trace obj is %p\n", obj);
    if (obj->ref != nullptr)
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