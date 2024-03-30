#include <stdio.h>

/**
 * main - Entry point
 * Description: program using putchar to print the
 * alphabet in lowercase
 * Return: 0 (Sucess)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
