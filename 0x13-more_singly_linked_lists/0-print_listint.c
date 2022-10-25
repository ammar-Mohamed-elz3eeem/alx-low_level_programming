#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list consist of number of nodes
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;
	const listint_t *last = h;

	while (last != NULL)
	{
		printf("%d\n", last->n);
		len++;
		last = last->next;
	}

	return (len);
}
