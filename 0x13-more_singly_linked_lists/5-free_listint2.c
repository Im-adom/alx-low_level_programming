#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head of the list.
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *cnode = *head;

	while (cnode != NULL)
	{
		listint_t *next = cnode->next;

		free(cnode);
		cnode = next;
	}
	*head = NULL;
}
