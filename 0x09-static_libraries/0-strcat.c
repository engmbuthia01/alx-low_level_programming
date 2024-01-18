#include "main.h"

/**
 *  _strcat - fill a block of memory with a particular value
 *  @dest: value
 *  @src: value
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
int a;
int b;
a = 0;

while (dest[a] != '\0')
{

a++;
}

b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}

