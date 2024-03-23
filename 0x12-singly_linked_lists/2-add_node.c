#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t string;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (string = 0; str[string]; string++)
		;

	node->len = string;
	node->next = *head;
	*head = node;

	return (*head);
}
