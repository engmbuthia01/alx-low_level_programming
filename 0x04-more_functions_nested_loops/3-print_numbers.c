#include "main.h"

/**
 * print_numbers - program prints numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
