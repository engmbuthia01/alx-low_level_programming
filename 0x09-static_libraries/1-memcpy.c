#include "main.h"

/**
 *_memcpy - copy blocks of memory from one place to another
 *@dest: memory where is stored
 *@src: memory to be copied from
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

int r = 0;
int i = n;
 
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}

