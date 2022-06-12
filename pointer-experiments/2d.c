#include <stdio.h>

// While initializing arrays you go from left to right (outside -> inside).

void main(void)
{
    int a[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
    int b[3][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}};

    printf("\nFirst array:\n%p\n", (a + 0));
    printf("%d\n", *(*(a + 0) + 0));
    printf("%d\n", *(*(a + 0) + 4));

    printf("\nSecond array:\n%p\n", (a + 1));
    printf("%d\n", *(*(a + 1) + 0));
    printf("%d\n", *(*(a + 1) + 4));

    printf("\n%p\n", (b));
    printf("%d\n", *(*(*(b) + 0) + 0));
    printf("%d\n", *(*(*(b) + 0) + 1));
    printf("%d\n", *(*(*(b) + 1) + 0));
    printf("%d\n", *(*(*(b) + 1) + 1));

    printf("\n%p\n", (b + 1));
    printf("%d\n", *(*(*(b + 1) + 0) + 0));
    printf("%d\n", *(*(*(b + 1) + 0) + 1));
    printf("%d\n", *(*(*(b + 1) + 1) + 0));
    printf("%d\n", *(*(*(b + 1) + 1) + 1));

    printf("\n%p\n", (b + 2));
    printf("%d\n", *(*(*(b + 2) + 0) + 0));
    printf("%d\n", *(*(*(b + 2) + 0) + 1));
    printf("%d\n", *(*(*(b + 2) + 1) + 0));
    printf("%d\n", *(*(*(b + 2) + 1) + 1));
}