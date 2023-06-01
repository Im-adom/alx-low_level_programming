#include "lists.h"
#include <stdlib.h>
/**
 * free_list - this function frees a list_t list.
 * @head: the list_t list to be freed
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

