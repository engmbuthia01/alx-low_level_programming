#include "main.h"

/**
  * _memcpy -  copies memory area
  * @dest: pointer to the storage memory
  * @src: source memory
  * @n: bytes to copy
  *
  * Return: a pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
