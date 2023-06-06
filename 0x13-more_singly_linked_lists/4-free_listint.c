#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: listint_t list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *cnode;

	while (head)
	{
		cnode = head->next;
		free(head);
		head = cnode;
	}
}
