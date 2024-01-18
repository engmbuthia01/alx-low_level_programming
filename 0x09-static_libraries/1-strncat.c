#include "main.h"

/**
 * _strncat - concatenates string2 to string1
 * @dest: value1
 * @src: value2
 * @n: value3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int a;
int b;	 
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}

