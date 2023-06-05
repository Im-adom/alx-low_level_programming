#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a
 * listint_t list.
 * @n: an integer
 * @head: a double pointer to the head of the list
 * Return: the address of the new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *cnode = *head;

		while (cnode->next != NULL)
		{
			cnode = cnode->next;
		}
		cnode->next = newnode;
	}
	return (newnode);
}
