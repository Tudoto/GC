#include "Heap.h"
#include <iostream>
#ifndef VM_H
#define VM_H

#define MAX_STACK 100
#define MAX_HEAP 1000
#define GC_THRESHOLD 2

enum class typeInfo
{
    INT,
    REF
};

// the super class for all the class
class object
{
public:
    bool marked = 0;
    typeInfo type;
    union
    {
        int value;
        object *ref = nullptr;
    };
    object *next = nullptr;
    void *operator new(size_t size);
};

class VM
{
public:
    // Simulating a stack
    // only consider root from stack
    object *stack[MAX_STACK]{};
    object *listHead = nullptr;
    int stackSize = 0;
    int objectSize = 0;
    int maxObjectSize = 0;
    void freeVM();

    VM();
    ~VM();
    object *push(object *value);
    void pushInt(int value);
    object *pop();
    void gc();
    void mark();
    void sweep();
    void trace(object *obj);
    static void assert1(int condition, const char *message);

private:
};
static Heap *g_heapInstance;

static Heap *GetHeapInstance()
{
    g_heapInstance = new Heap(MAX_HEAP);
    return g_heapInstance;
};
#endif