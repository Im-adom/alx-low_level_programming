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
	dlistint_t *new_node;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	return (new_node);
}
