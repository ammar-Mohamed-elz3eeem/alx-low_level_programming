#include "lists.h"

/**
 * free_listint2 - frees linked list from all its elements
 * @head: linked list to
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
	*head = NULL;
}
