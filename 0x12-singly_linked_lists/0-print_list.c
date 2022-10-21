#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t element
 * Return: the number of nodes in list_t
 */

size_t print_list(const list_t *h)
{
	size_t len;
	const list_t *li = h;

	for (len = 0; li != NULL; len++)
	{
		if (li->str == NULL)
			printf("[%d] (nil)\n", li->len);
		else
			printf("[%d] %s\n", li->len, li->str);
		li = li->next;
	}
	return (len);
}
