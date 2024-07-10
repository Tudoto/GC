#ifndef HEAP_H
#define HEAP_H
#include <vector>
enum class typeInfo
{
    INT,
    REF
};


#define MAX_STACK 100
#define MAX_HEAP 1000
#define GC_THRESHOLD 2
// the super class for all the class
class object
{
public:
    bool marked = 0;
    typeInfo type;
    int size;
    union
    {
        int value;
        object *ref = nullptr;
    };
    //object *next = nullptr;
    void *operator new(size_t size);

};
class Space
{
public:
    Space(int size);
    ~Space();
    void *Alloc(int size);
    bool isAllocAvaliable(int size);
    void* tryAllocFromBuffer(int size);

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
    //void GC();
    void forEachObject();
    void free(object *ptr);
    void* tryAllocFromBuffer(int size);
private:
    std::vector<object*> allocBuffer;
    Space *heapSpace1;
    Space *heapSpace2;
    Space *fromSpace;
    Space *toSpace;
    
    Space *metaSpace;
};

static Heap *g_heapInstance;

static Heap *GetHeapInstance()
{
    g_heapInstance = new Heap(MAX_HEAP);
    return g_heapInstance;
};

#endif

