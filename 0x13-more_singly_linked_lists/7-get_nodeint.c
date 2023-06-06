#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @index: the index of the node to return
 * @head: the first node in the linked list.
 * Return: NULL or the pointer to the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ptr = head;

	while (ptr && x < index)
	{
		ptr = ptr->next;
		x++;
	}
	return (ptr ? ptr : NULL);
}
