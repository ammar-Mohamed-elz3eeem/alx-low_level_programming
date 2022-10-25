#include "lists.h"

/**
 * get_nodeint_at_index - get node element at specified position
 * @head: linked list
 * @index: index of the element you want to return
 * Return: node element at specified index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *node = NULL;

	while (head != NULL)
	{
		if (idx > index)
			return (NULL);

		if (idx == index)
		{
			node = head;
			return node;
		}
		idx++;
		head = head->next;
	}

	return (NULL);
}