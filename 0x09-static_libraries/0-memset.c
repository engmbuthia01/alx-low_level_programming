#include "main.h"

/**
 * _memset - transform each character of the whole string into int
 * @s: starts address of memory to be filled
 * @b: value
 * @n: number of bytes to be changed
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{

int a = 0;

for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}


