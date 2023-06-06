#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a
 * listint_t list.
 * @n: an input
 * @head: a pointer to the head of the list
 * Return: the address of the new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *ptr = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (ptr->next)
		ptr = ptr->next;

	ptr->next = newnode;
	return (newnode);
}
