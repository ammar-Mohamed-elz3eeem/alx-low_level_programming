#include "lists.h"

/**
 * free_listint - frees linked list from all its elements
 * @head: linked list to
 */

void free_listint(listint_t *head)
{
	listint_t *last;

	while (head)
	{
		last = head;
		free(head->next);
		free(head);
		head = last
	}
}
