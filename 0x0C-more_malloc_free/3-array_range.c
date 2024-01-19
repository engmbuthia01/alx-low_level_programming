#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array containing a range of elements
 * @min: int type
 * @max: int type
 * Return: A pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
