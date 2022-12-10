#include "lists.h"

/**
 * add_dnodeint - add element in the linked list
 * @head: doubly linked list
 * @n: value to be saved on the added list item
 * Return: the address of the new element if added, otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
