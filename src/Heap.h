#ifndef HEAP_H
#define HEAP_H

class Space
{
public:
    Space(int size);
    ~Space();
    void *Alloc(int size);
    bool isAllocAvaliable(int size);

private:
    // char* is better than void* for memory management
    char *startAddr = 0;
    char *allocAddr = 0;
    char *endAddr = 0;
    int capacity = 0;
    int size;
};

class Heap
{
public:
    Heap(int size);
    ~Heap();
    void *Alloc(int size);
    void GC();
    

private:
    Space *heapSpace1;
    Space *heapSpace2;
    Space *fromSpace;
    Space *toSpace;
    
    Space *metaSpace;
};

#endif

