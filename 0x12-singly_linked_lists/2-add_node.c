#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of the first element of the list_t
 * @str: string to be added to the newely created node
 * Return: node after adding the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *linked_list;
	char *added_str;
	int len;

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

	linked_list->str = added_str;
	linked_list->next = *head;
	linked_list->len = len;

	*head = linked_list;

	return (linked_list);
}
