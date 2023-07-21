#include "lists.h"
/**
 * add_dnodeint - This function adds a new node at the
 * beginning of a dlistint_t list.
 * @head: A double pointer to the head of a doubly linked list.
 * @n: the value to assign the new node to.
 * Return: the address of the new element or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head)
	{
	new_node = malloc(sizeof(*new_node));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;

		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	}
	return (new_node);
}
