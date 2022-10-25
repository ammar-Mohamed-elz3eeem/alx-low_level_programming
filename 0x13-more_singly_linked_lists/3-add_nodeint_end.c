#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add node element to the list
 * @h: linked list consist of number of nodes
 * Return: number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}

	return *head;
}
// head = [ [0, 7fff515], [2, 7fff500],[5, NULL] ]
// last = [5, NULL]