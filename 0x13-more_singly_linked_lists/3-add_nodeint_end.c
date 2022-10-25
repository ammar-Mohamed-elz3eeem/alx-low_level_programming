#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add node element to the list at the end
 * @head: linked list consist of number of nodes
 * @n: number to be added to linked list
 * Return: linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

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

	return (*head);
}
