#include <stdio.h>

void fibonacci(int amount, int a, int b)
{
    if(amount > 0){
        printf("%d\n", a);
        fibonacci(amount-1, b, a + b);
    }
}

void startFibonacci(int amount)
{
    fibonacci(amount, 0, 1);
}

void main(void)
{
    int value;
    scanf("%d", &value);
    startFibonacci(value);
}