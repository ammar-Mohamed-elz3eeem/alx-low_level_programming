#include "lists.h"

/**
 * print_dlistint - print elements of doubly linked list
 * @h: doubly linked list
 * Return: number of elements in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_elems = 0;
	const dlistint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		no_elems++;
	}

	return no_elems;
}