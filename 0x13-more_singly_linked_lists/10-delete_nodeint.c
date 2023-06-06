#include "lists.h"
/**
 * delete_nodeint_at_index- deletes the node at
 * index index of a listint_t linked list.
 * @index: the index of the node to delete.
 * @head: the pointer to the head of the list.
 * Return: 1 if it succeeds and -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *ptr = *head;
	listint_t *cnode = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while  (a < index - 1)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
		a++;
	}
	cnode = ptr->next;
	ptr->next = cnode->next;
	free(cnode);
	return (1);
}
