#include "lists.h"

/**
 * free_list - free the memory from the linked list given in input
 * @head: linked list to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (; head;)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
