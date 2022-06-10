#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value;
    scanf("%d", &value);
    value = abs(value);
    int count = 0;
    while (value >= 1)
    {
        value = value / 10;
        count++;
    }
    printf("%d", count);
}