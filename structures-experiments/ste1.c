#include <stdio.h>

// We have to take memory padding into account while making structures.
// n-byte data will get stored in an address divisible by n.
// Possible addresses for a 4 byte integer:
// 0x0000, 0x0004, 0x0008, 0x000C,
// 0x0010, 0x0014, 0x0018, 0x001C and so on.

//#pragma pack(1); <- This is used to disable memory padding.
// Pros: You store structures using less space in memory.
// Cons: You can take more CPU cycles to read data.
// I personally wouldn't use it lol.

typedef struct ste1
{
    int a;
    int b;
} ste1;

// This is a structure which allocates its variables in the same memory location.
// This means that if I assign a value in a, b will change as well.
// Useful to store various types of objects using the same structure.
typedef union ste2
{
    short a;
    char b;
} ste2;

// You cannot use method overloading in C.
// Defining a method with the purpose of instantiating a structure doesn't seem really useful.
/*
ste1 createSte1(int a, int b)
{
    ste1 newSte1 = {a, b};
    return newSte1;
}
*/

void main(void)
{
    ste1 s1 = {10, 20};
    ste1 s2 = {30, 40};
    ste1 s3 = {.b = 60};
    ste1 ss[] = {s1, s2, s3};
    printf("%d %d %d %d %d\n", s1.a, s1.b, s2.a, s2.b, ss[2].b);

    ste1 *p = &s1;
    printf("\n%p\n", p);
    printf("%p\n", &(*p).a);
    printf("%p\n", &(*p).b);

    printf("\n%p\n", p + 1);
    printf("%p\n", &(*(p + 1)).a);
    printf("%p\n", &(*(p + 1)).b);

    // 258 in binary is 00000001 00000010.
    ste2 t1 = {.a = 258};

    // The first value is 258 and the second value is 2.
    // Since a is an integer, it can print the whole number (00000001 00000010).
    // b is a char, so it only prints a part of the number (00000010).
    printf("\n%d %d", t1.a, t1.b);
}