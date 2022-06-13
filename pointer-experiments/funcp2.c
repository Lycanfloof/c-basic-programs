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
    // Pointer to a function.
    void (*p)(char) = example;
    p('C');

    // Array of functions. You can call them by retriving their values.
    void (*array[2])(void) = {a, b};
    array[0]();
    array[1]();

    (*(array + 0))();
    (*(array + 1))();
}