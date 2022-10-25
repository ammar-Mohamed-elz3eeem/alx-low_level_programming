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
	listint_t *node = NULL;
	listint_t *prev_node = NULL;
	listint_t *list = *head;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));

	if (node == NULL || listint_len(list) < idx)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	while (list != NULL)
	{
		if (i <= idx)
		{
			if (i == idx)
			{
				node->next = prev_node->next;
				prev_node->next = node;
				return (node);
			}
			else if ((i + 1) == idx)
				prev_node = list;
		}
		list = list->next;
		i++;
	}

	return (NULL);
}

/**
 * listint_len - return number of elements of a listint_t list
 * @h: linked list consist of number of nodes
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *last = h;
	int len = 0;

	while (last != NULL)
	{
		len++;
		last = last->next;
	}

	return (len);
}
