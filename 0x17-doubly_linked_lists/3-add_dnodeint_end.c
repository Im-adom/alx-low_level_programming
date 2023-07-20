#include "lists.h"
/**
 * add_dnodeint_end - This function adds a new node at the
 * end of a doubll linked list.
 * @head: double pointer to the head of the list.
 * @n: the value of element.
 * Return: address of the newly added element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
		new_node->prev = h;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
