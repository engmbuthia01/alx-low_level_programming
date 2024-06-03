#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: String to search
 * @needle: substring
 *
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		if (*need == '\0')
			return (haystack);
	}
	return ('\0');
}
