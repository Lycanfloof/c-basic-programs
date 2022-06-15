#include <stdlib.h>

void main(void)
{
    // Memory allocation. It allocates a certain amount of memory and returns the address of the first byte.
    char *p = malloc(5 * sizeof(char));

    // Clean memory allocation. It allocates n blocks of memory of a certain size and returns the address of the first byte.
    char *q = calloc(5, sizeof(char));

    // These two expressions allocate the same amount of memory.
    // malloc() doesn't set its values to NULL, while calloc() does.
    // Both return NULL when memory hasn't been allocated.
}