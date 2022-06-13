#include <stdio.h>

// Here you can see how the function copies the value of the argument somewhere in memory.
// You can check this by seeing each pointer's address in memory (they're different).

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