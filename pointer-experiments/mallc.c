#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *p = NULL;
    char *q = NULL;
    char *r = NULL;
    char *s = NULL;
    char *t = NULL;

    // Memory allocation: It allocates a block of memory of a certain size and returns the address of the first byte.
    p = malloc(5 * sizeof(char));

    // Clean memory allocation: It allocates n blocks of memory of a certain size and returns the address of the first byte.
    q = calloc(5, sizeof(char));

    // These two expressions allocate the same amount of memory.
    // malloc() doesn't set its values to NULL, while calloc() does. This means malloc() can return garbage values.
    // Both return NULL when memory couldn't be allocated.

    // Good practice: Always assign NULL to the pointer after freeing its memory.
    free(p);
    p = NULL;

    free(q);
    q = NULL;

    // Memory re-allocation: It allocates the given memory with a new size.
    // If there's not enough room to add more blocks of memory, then it will copy the existing values into another location and add the new blocks.
    // r = calloc(1, sizeof(char));
    // s = calloc(1, sizeof(char));
    r = malloc(16 * sizeof(char));
    s = malloc(16 * sizeof(char));

    t = r;
    r = realloc(r, 64 * sizeof(char));

    free(r);
    r = NULL;

    free(s);
    s = NULL;

    // free(t); <- This causes an exception because realloc() frees its memory after it's done copying it.
    t = NULL;
}