#include <stdio.h>

/**
 * malloc_checked - allocate memory dynamically from the heap
 * @b: The memory size to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
