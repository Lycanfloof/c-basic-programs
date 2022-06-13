#include <stdio.h>

void example(void)
{
    // Do whatever man.
}

void fa(void)
{
    // Idk man.
}

void fb(void)
{
    // Idk man.
}

void fc(void)
{
    // Idk man.
}

void main(void)
{
    // Pointer p points to a's address in memory, which is an integer.
    int a = 10;
    int *p = &a;

    // b points to the first element of an array of integers in memory.
    // q is set to point to that same address.
    // r points to the whole array in memory. This is why it's declared like int(*r)[].
    int b[] = {1, 0};
    int *q = b;
    int(*r)[] = &b;

    // Here an array of arrays is created.
    // c and u point to the first array stored in the array.
    // v points to the second array stored in the array.
    // s points to the first element of the first inner array.
    // t points to the first element of the second inner array.
    int c[][2] = {{1, 0}, {1, 0}};
    int(*u)[2] = (c + 0);
    int(*v)[2] = (c + 1);
    int *s = *(c + 0);
    int *t = *(c + 1);

    // Functions are pointers, so you basically can assign them to other pointers.
    // example and w point to the first line of the function in memory.
    // x points to the whole function in memory.
    void (*w)(void) = example;
    void (*x)(void) = &example;

    // Function example() gets called with w();
    // You could interpret it like they're synonims now.
    w();

    // Function example() gets called by dereferencing x.
    (*x)();

    // Here an array of functions is created. This is basically an array of pointers which lead to the first line of some functions.
    // d points to the first function in memory.
    void (*d[3])(void) = {fa, fb, fc};

    // You can call functions by getting them from the array or by dereferencing the address d.
    d[0]();
    (*(d + 0))();

    d[1]();
    (*(d + 1))();

    d[2]();
    (*(d + 2))();
}