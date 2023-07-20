#include "lists.h"
/**
 * get_dnodeint_at_index - this function returns the nth
 * node of a dlistint_t linked list.
 * @head: a ppointer to the head of the d linked list.
 * @index: index of the node, starting for 0.
 * Return: address of the nth node, or NULL if the not does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int id = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (id == index)
		break;
		head = head->next;
		id++;
	}
	return (head);
}
