#include "lists.h"
/**
 * insert_dnodeint_at_index -This function inserts a new
 * node at a given position
 * @h: pointer
 * @idx: the index of the list
 * @n: the data to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *new_node;

	if (!idx)
		return (add_dnodeint(h, n));

	if (!h)
		return (NULL);

	prev = *h;

	if (!prev)
		return (NULL);

	while (--idx && prev->next)
		prev = prev->next;

	if (idx)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = prev;
	new_node->next = prev->next;

	if (prev->next)
		prev->next->prev = new_node;
	prev->next = new_node;

	return (new_node);
}
