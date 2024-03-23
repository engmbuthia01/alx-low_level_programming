#include "lists.h"

/**
 * print_list - This is a function that prints elements of a list
 * @h: This is a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
