#include "lists.h"

/**
 * free_listint2 - frees linked list from all its elements
 * @head: linked list to
 */

void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t **tmp = head;

	if (tmp == NULL)
		return;

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}
}
