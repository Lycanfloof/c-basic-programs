#include <stdio.h>
#include <stdlib.h>

int *example(void)
{
    int a = 20;
    return &a;
}

void main(void)
{
    int a = 10;

    // Void pointers don't have a particular data type assigned to them.
    // Dereferencing them require a cast, otherwise an error will be thrown.
    void *p = &a;

    printf("%p\n", p);
    printf("%d\n", *((int *)p));

    // NULL can be assigned to pointers. This represents an invalid memory location.
    // It can be represented with the address 0x0000000000000000.
    // Good practice: Check if a pointer has a valid address by comparing it with NULL.
    void *q = NULL;
    void *r = 0;

    printf("%p\n", q);
    printf("%p", r);

    // Dangling pointer: It points to an non-existing memory location.
    // Since we de-allocate the memory in line 33, s becomes a dangling pointer.
    // Dereferencing it will produce a segmentation fault.
    // It's recommended to assign NULL to the pointer after freeing its memory.
    int *s = (int *)malloc(sizeof(int));

    free(s);
    s = NULL;

    // The address of a local variable is returned and assigned to s, hence it becomes a dangling pointer.
    s = example(); // <- Don't do this!
    s = NULL;

    // Wild pointer: It points to an unknown memory location. This happens because it is non-initialized.
    // Good practice: Always initialize a pointer with a variable's address, with NULL or with malloc() | calloc();

    int *t; // <- Bad practice!

    // printf("%d", *t); <- This can produce a segmentation fault!

    t = NULL;
}