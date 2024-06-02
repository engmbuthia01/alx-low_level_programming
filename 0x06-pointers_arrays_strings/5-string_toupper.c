#include "main.h"

/**
 * string_toupper -  changes all lowercase letter
 * to uppercase
 *@n: string
 * Return: n(result)
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = (int)n[i] - 32;
	}
	return (n);
}
