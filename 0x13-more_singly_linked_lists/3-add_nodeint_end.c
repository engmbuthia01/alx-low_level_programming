#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the pointer to the head
 * @n: data to be stored in the new value
 *
 * Return: address of the new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *arrow = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (arrow != NULL)
	{
		while (arrow->next != NULL)
			arrow = arrow->next;
		arrow->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
