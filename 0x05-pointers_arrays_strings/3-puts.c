#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: pointer to a string of type char
 * Return: 0 (Success)
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
