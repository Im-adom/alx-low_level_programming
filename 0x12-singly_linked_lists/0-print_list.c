#include "lists.h"
#include <stddef.h>
/**
 * print_list - this prints the elements of a list_t list.
 * @h: a pointer to the head of linked list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
	if (ptr->str == NULL)
	{
	printf("[%d] (nil)\n", ptr->len);
	}
	else
	{
		printf("[%d] %s\n", ptr->len, ptr->str);
	}
	c++;
	ptr = ptr->next;
	}
	return (c);
}
