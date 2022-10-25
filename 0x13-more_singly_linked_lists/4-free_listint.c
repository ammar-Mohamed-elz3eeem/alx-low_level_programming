#include "lists.h"

/**
 * free_listint - frees linked list from all its elements
 * @head: linked list to
 */

void free_listint(listint_t *head)
{
	listint_t *last = head;

	while (last->next != NULL)
	{
		free(head->next);
		last = last->next;
	}
	free(head);
}
