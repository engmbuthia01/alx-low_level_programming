#include <stdio.h>

/**
 * main - This is the entry point
 * Description: This program uses the putchar function to
 * print  all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
