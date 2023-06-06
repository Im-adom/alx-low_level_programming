#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @n: a data input
 * @head: a pointer to the node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
