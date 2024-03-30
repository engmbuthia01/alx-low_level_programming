#include <stdio.h>

/**
 * main - This is the entry point
 * Description: This is a program that prints the alphabet
 * in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
