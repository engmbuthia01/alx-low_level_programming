#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: pointer to the number
 *
 * Return: 0 (sucess)
 */

void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int i;

    for (i = 0; i < sizeof(unsigned long int) * 8; i++)
    {
        if (n & mask)
     	printf("1");
        else
            printf("0");
        mask >>= 1;
    }
    printf("\n");
}
