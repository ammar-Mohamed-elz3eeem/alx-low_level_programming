#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: address of the first element of the list_t
 * @str: string to be added to the newely created node
 * Return: node after adding the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *added_str;
	list_t *linked_list;
	int len;
	list_t *last;

	linked_list = malloc(sizeof(list_t));

	if (linked_list == NULL)
		return (NULL);

	added_str = strdup(str);
	if (added_str == NULL)
	{
		free(linked_list);
		return (NULL);
	}
	len = strlen(added_str);

	linked_list->len = len;
	linked_list->str = added_str;
	linked_list->next = NULL;

	if (*head == NULL)
		*head = linked_list;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = linked_list;
	}

	return (*head);
}
