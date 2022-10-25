#include "lists.h"

/**
 * pop_listint - remove the head element of the linked list
 * and return its values
 * @head: linked list head
 * Return: value of the removed node
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int node_element;

	if (*head == NULL)
		return (0);

	list = (*head)->next;
	node_element = (*head)->n;
	free(*head);
	*head = list;
	return (node_element);
}
