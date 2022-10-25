#include "lists.h"

/**
 * sum_listint - sum of all node elements at linked list
 * @head: linked list
 * Return: sum of all (n) elements
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
