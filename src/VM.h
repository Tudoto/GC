#include "Heap.h"
#include <iostream>
#include <stack>
#ifndef VM_H
#define VM_H




class VM
{
public:
    // Simulating a stack
    // only consider root from stack
    object *stack[MAX_STACK]{};
    std::stack<object*> rootSet;
    //object *listHead = nullptr;
    int stackSize = 0;
    int objectSize = 0;
    int maxObjectSize = 0;
    void freeVM();

    VM();
    ~VM();
    void push(object *value);
    void pushInt(int value);
    object *pop();
    void gc();
    void mark();
    void sweep();
    void trace(object *obj);
    static void assert1(int condition, const char *message);

private:
};

#endif