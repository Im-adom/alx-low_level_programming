#include "lists.h"

/**
 * listint_len - this function returns the number
 * of elements in a linked listint_t list.
 * @h: ponter to the next node.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
