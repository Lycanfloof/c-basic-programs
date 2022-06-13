#include <stdio.h>

void main(void)
{
    char *s = "Hello!";
    // *s = 'A'; <- Error! The array has been defined as ROM, therefore you cannot change its value.
    // You can change the pointer's value though.
    char a[] = {'W', 'o', 'r', 'l', 'd', '!'};
    *a = 'A';
    printf("%s\n", s);
    printf("%s", a);
}