#include "main.h"

/**
 * _isupper - check if a given character is in uppercase or not
 * @c: character to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

