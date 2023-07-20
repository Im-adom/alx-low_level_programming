#include "lists.h"
/**
 * free_dlistint - This function frees a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node);
	}
}
