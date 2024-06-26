#include "lists.h"


/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: pointer to a pointer to the current head
 * Return: void
 *
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
