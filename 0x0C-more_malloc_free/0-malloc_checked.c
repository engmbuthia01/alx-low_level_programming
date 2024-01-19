#include <stdio.h>

/**
 * malloc_checked - allocate memory dynamically from the heap
 * @b: The memory size to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *r = malloc(b);

if (r == NULL)
exit (98);

return (p);
}
