#include <stdio.h>

void main(void)
{
    int value;
    scanf("%d", &value);
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < value; i++)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
}