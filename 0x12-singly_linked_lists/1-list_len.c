#include "lists.h"
#include <stdio.h>

/**
 * list_len - number of elements in a list_t list
 * @h: list_t first element on the list
 * Return: the number of nodes in list_t
 */

size_t list_len(const list_t *h)
{
	const list_t *el = h;
	size_t count = 0;

	for (; el; count++)
	{
		el = el->next;
	}
	return (count);
}
