#include <stdio.h>

void main(void)
{
    //Here I experiment with what happens if you don't assign a value to a variable before printing it.
    int a;
    int b;
    int c;
    int d;
    printf("%d\n", a + c);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
}