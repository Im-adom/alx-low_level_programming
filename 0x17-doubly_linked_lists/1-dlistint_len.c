#include "lists.h"
/**
 * dlistint_len - This function returns the number of
 * elements in a dlistint_t list.
 * @h: a pointer to the header of a doubly liked list.
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c;

	c = 0;
	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
