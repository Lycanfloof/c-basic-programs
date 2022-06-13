#include <stdio.h>

void main(void)
{
    int a[2] = {1, 2};
    int(*o)[2] = &a;
    int *p = a;

    int b[2][3] = {1, 2, 3, 4};
    int(*m)[3] = b;
    int *q = *b;

    int c[2][2][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    int(*n)[2][2] = c;
    int *r = **c;
}