#include <stdio.h>

/**
 * main - prints all possible combination of two
 * digit numbers, without any repetition
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		int j;

		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
