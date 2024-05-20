#include <stdio.h>

/**
 * first -defines a function that is executed first,
 * before the main function.
 *
 * Return: no return
 *
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
