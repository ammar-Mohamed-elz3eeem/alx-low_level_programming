#include "lists.h"

/**
 * free_listint2 - frees linked list from all its elements
 * @head: linked list to
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (*head == NULL)
		return;

	while (*head)
	{
		if ((*head)->next != NULL)
			list = (*head)->next;
		else
			list = NULL;
		free(*head);
		*head = list;
	}
}
