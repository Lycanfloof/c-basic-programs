#include <stdio.h>

void example(char c)
{
    printf("%c", c);
}

void a(void)
{
    printf("%c", 'A');
}

void b(void)
{
    printf("%c", 'B');
}

void main(void)
{
    void (*p)(char) = example;
    p('C');

    void (*array[2])(void) = {a, b};
    array[0]();
    array[1]();

    (*(array + 0))();
    (*(array + 1))();
}