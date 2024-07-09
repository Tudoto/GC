#include "iostream"
#include "VM.h"
void test1()
{
    printf("Test 1: Objects on stack are preserved.\n");
    auto vm = new VM();
    vm->pushInt(1);
    vm->pushInt(2);

    vm->gc();
    VM::assert1(vm->objectSize == 2, "Should have preserved objects.");
    vm->freeVM();
    delete (vm);
}

// void test2()
// {
//     printf("Test 2: Unreached objects are collected.\n");
//     auto vm = new VM();
//     vm->pushInt(1);
//     vm->pushInt(2);
//     vm->pop();
//     vm->pop();

//     vm->gc();
//     VM::assert1(vm->objectSize == 0, "Should have collected objects.");
//     vm->freeVM();
//     delete (vm);
// }

// void test3()
// {
//     printf("Test 3: Reach nested objects.\n");
//     auto vm = new VM();
//     vm->pushInt(1);
//     vm->pushInt(2);
//     object *a = new object();
//     vm->push(a);
//     vm->pushInt(3);
//     vm->pushInt(4);
//     object *b = new object();
//     vm->push(b);
//     object *c = new object();
//     vm->push(c);

//     vm->gc();
//     VM::assert1(vm->objectSize == 7, "Should have reached objects.");
//     vm->freeVM();
//     delete (vm);
// }

// void test4()
// {
//     printf("Test 4: Handle cycles.\n");
//     auto vm = new VM();
//     vm->pushInt(1);
//     vm->pushInt(2);
//     object *b = new object();
//     object *a = vm->push(b);

//     vm->pushInt(3);
//     vm->pushInt(4);
//     vm->push(a);

//     // cycle reference
//     b->ref = a;
//     // TODO:testsuits not sure
//     vm->gc();
//     VM::assert1(vm->objectSize == 6, "Should have collected objects.");
//     vm->freeVM();
//     delete (vm);
// }

// void perfTest()
// {
//     printf("Performance Test.\n");
//     auto vm = new VM();

//     for (int i = 0; i < 1000; i++)
//     {
//         for (int j = 0; j < 20; j++)
//         {
//             vm->pushInt(i);
//         }

//         for (int k = 0; k < 20; k++)
//         {
//             vm->pop();
//         }
//     }
//     vm->freeVM();
//     delete (vm);
// }

int main()
{
    test1();
    // test2();
    // test3();
    // test4();
    // perfTest();

    return 0;
}