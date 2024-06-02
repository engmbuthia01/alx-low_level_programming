#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 *
 * Return: pointer to the vresulting dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int value = 0;

	for (i = 0; value == 0; i++)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			break;
		value = s1[i] - s2[i];
	}

	return (value);
}
