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

    // Void pointers are useful to point to any data type. You gotta cast them if you wanna use them.
    void *p = &a;
    printf("%p\n", p);
    printf("%d\n", *((int *)p));

    // NULL can be assigned to pointer variables. This represents an invalid memory location.
    // It can be represented with the address 0x0000000000000000.
    // Good practices: Initialize a pointer with NULL before using it.
    // Check if a pointer has a valid address by comparing it with NULL.
    void *q = NULL;
    void *r = 0;
    printf("%p\n", q);
    printf("%p", r);

    // Dangling pointer. It points to an non-existing memory location.
    // Since we de-allocate the memory in line 25, s becomes a dangling pointer.
    // Dereferencing this pointer will produce a segmentation fault.
    int *s = (int *)malloc(sizeof(int));
    free(s);

    // It's necessary to assign NULL to this pointer then.
    s = NULL;

    // This can be caused by returning the address of a local variable.
    // s becomes a dangling pointer.
    s = example(); // <- Don't do this!
    s = NULL;

    // Wild pointers. It points to an unknown memory location.
    // It is recommended to always initialize pointers with a variable's adress, with NULL or using malloc();
    int *t; // <- Bad practice!
    // printf("%d", *t); <- This can produce a segmentation fault!
}