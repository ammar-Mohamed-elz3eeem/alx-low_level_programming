#include "lists.h"

/**
 * dlistint_len - print number of elements of doubly linked list
 * @h: doubly linked list
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_elems = 0;
	const dlistint_t *list = h;

	while (list != NULL)
	{
		no_elems++;
		list = list->next;
	}

	return (no_elems);
}
