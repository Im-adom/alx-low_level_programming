#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node  at a given position
 * @idx: the index where the new node is added.
 * @head: pointer to the head node.
 * @n: the data to insert in new node.
 * Return: address to the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *ptr = *head;
	unsigned int a;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (a = 0; ptr && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (newnode);
		}
		else
			ptr = ptr->next;
	}
	return (NULL);
}
