#include <stdio.h>

// Here I experiment with what happens if you don't assign a value to a variable before printing it.

int e;
int f;
int g;

void main(void)
{
    int a;
    int b;
    int c;
    int d;

    printf("GLOBAL: %d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);

    printf("LOCAL: %d\n", a + c);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
}