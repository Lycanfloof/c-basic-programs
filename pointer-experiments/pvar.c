#include <stdio.h>

void main(void)
{
    // a and p point to the first element of the array. That means they point to an integer.
    // o is a pointer to the whole array.
    int a[2] = {1, 2};
    int(*o)[2] = &a;
    int *p = a;

    // b and m point to the first element of the array. That means they point to an array.
    // q is a pointer to the first element of the first array.
    int b[2][3] = {1, 2, 3, 4};
    int(*m)[3] = b;
    int *q = *b;

    // I don't feel like commenting this lol.
    // Same bullshit as the above, except it is a 3D array.
    int c[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    int(*n)[2][2] = c;
    int *r = **c;
}