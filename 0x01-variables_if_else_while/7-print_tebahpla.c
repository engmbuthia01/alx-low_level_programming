#include <stdio.h>

/**
 * main - This is the entry point
 * Description: A program that uses putchar to print
 * the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
