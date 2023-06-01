#include "lists.h"
/**
 * list_len - this returns the number of elements in a list_t list.
 * @h: head of the linked list.
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t calc = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
	calc++;
	ptr = ptr->next;
	}
	return (calc);
}
