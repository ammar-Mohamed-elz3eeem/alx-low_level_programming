#ifndef LISTS_FILE
#define LISTS_FILE

#include <stdlib.h>

/**
 * struct list - struct to determine linked list item
 * @str: string of the linked list
 * @len: length of the string
 * @next: pointer to the next element in the linked list
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
