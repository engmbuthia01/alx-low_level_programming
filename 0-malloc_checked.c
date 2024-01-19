#include "main.h"

/**
 * malloc_checked - allocates a specified number of bytes of memory
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem == NULL)
{
exit(98);
}

return (mem);
}

