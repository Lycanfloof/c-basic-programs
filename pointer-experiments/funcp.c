#include <stdio.h>

void example(int *a)
{
    printf("%p\n", a);
    int *b = a;
    int **c = &b;
    printf("%p\n", c);
}

void main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    printf("%p\n", a);
    int *b = a;
    int **c = &b;
    printf("%p\n", c);
    example(a);
}