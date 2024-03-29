#include "lists.h"

/**
 * free_list - This is a function that frees a list_t list
 * @head: pointer to the head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
