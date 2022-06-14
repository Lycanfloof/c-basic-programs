#include <stdio.h>

typedef struct ste1
{
    int a;
    int b;
} ste1;

ste1 createSte1(int a, int b)
{
    ste1 newSte1;
    newSte1.a = a;
    newSte1.b = b;
    return newSte1;
}

void main(void)
{
    ste1 s1 = createSte1(10, 20);
    ste1 s2 = createSte1(30, 40);
    printf("%d %d %d %d\n", s1.a, s1.b, s2.a, s2.b);

    ste1 *p = &s1;
    printf("%p\n", p);
    printf("%p", p + 1);
}