#include <stdio.h>

void piramidColumns(char columns, char iteration)
{
    if (columns + iteration > 0)
    {
        (columns + iteration > iteration + (iteration + 1)) ? printf("%c", ' ') : printf("%c", '*');
        piramidColumns(columns - 1, iteration);
    }
}

void piramidRow(char rows, char iteration)
{
    if ((rows - iteration) > 0)
    {
        piramidColumns(rows, iteration);
        printf("\n");
        piramidRow(rows, iteration + 1);
    }
}

void startPiramid(char rows)
{
    piramidRow(rows, 0);
}

void main(void)
{
    char rows;
    scanf("%d", &rows);
    startPiramid(rows);
}