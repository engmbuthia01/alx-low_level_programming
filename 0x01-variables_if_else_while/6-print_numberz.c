#include <stdio.h>

/**
 * main - This is the entry point
 * Description: program using the putchar function to
 * prints all single digit numbers of base 10 starting from 0
 * 
 * Return: 0
 */

int main(void)
{
	int  x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
