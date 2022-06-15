#include <stdlib.h>

void main(void)
{
    // Memory allocation: It allocates a block of memory of a certain size and returns the address of the first byte.
    char *p = malloc(5 * sizeof(char));

    // Clean memory allocation: It allocates n blocks of memory of a certain size and returns the address of the first byte.
    char *q = calloc(5, sizeof(char));

    // These two expressions allocate the same amount of memory.
    // malloc() doesn't set its values to NULL, while calloc() does. This means malloc() can return garbage values.
    // Both return NULL when memory couldn't be allocated.

    // Good practice: Always assign NULL to the pointer after freeing its memory.
    free(p);
    p = NULL;

    free(q);
    q = NULL;
}