#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert node at specified position
 * @head: linked list
 * @idx: position of the new inserted node
 * @n: number to be inserted in node (n)
 * Return: linked list after insertion
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newlist;
	listint_t *node;
	listint_t *tmp;

	node = malloc(sizeof(listint_t));
	node->n = n;

	if (node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
	}
	else
	{
		newlist = *head;
		while (newlist->next != NULL)
		{
			if (i <= idx)
			{
				if (i == (idx - 1))
				{
					tmp = newlist;

					node->next = tmp->next;
					newlist->next = node;
				}
			}
			i++;
			newlist = newlist->next;
		}
	}
}
