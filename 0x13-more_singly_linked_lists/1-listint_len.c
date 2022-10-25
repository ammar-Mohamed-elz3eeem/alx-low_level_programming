#include "lists.h"
#include <stdio.h>

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
