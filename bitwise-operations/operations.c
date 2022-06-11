#include <stdio.h>

void main(void)
{
    int a = 15;
    int b = 3;
    printf("%u\n", a | b);
    printf("%u\n", a & b);
    printf("%u\n", a ^ b);
    printf("%u\n", ~a);
    printf("%u\n", a >> 1);
    printf("%u\n", a << 1);
}