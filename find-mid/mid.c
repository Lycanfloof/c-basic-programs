#include <stdio.h>

// Interesting. It seems like the array doesn't get copied in the execution of a function.

int *findMid(int a[], int n)
{
    printf("mid: %x\n", &a[n / 2]);
    printf("n: %x\n", &n);

    return &a[n / 2];
}

void main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof a / sizeof a[0];

    printf("mid: %x\n", &a[n / 2]);
    printf("n: %x\n", &n);

    int *mid = findMid(a, n);

    printf("mid: %x\n", mid);
    printf("n: %x\n", &n);
}