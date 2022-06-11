#include <stdio.h>

void main(void)
{
    char a;
    scanf("%d", &a);
    for (char i = 1; i <= a; i++)
    {
        for (char j = 1; j <= (a + i - 1); j++)
        {
            if (j > a - i)
            {
                printf("%c", '*');
            }
            else
            {
                printf("%c", ' ');
            }
        }
        printf("\n");
    }
}