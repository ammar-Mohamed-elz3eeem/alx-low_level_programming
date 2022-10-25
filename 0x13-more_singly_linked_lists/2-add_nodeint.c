#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add node element to the list
 * @h: linked list consist of number of nodes
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));

	if (first == NULL)
		return (NULL);

	first->n = n;
	first->next = *head;

	*head = first;

	return *head;
}
