#include <stdio.h>

void main(void)
{
    // This is a String literal:
    char *s = "Hello!";
    // *s = 'A'; <- Error! The String has been defined as ROM, therefore you cannot change its value.
    // You can change the pointer's value though.

    // This is a String variable:
    char a[] = {'W', 'o', 'r', 'l', 'd', '!', '\0'};
    *a = 'A';
    char b[] = "Planet!";
    *b = 'A';
    // In this case you can actually change its value because it is an array.

    printf("%s\n", s);
    printf("%s\n", a);
    printf("%s", b);
}