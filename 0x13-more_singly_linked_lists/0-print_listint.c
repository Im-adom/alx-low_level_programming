#include "lists.h"

/**
 * print_listint- prints all the elements of a listint_t list
 * @h: the current node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t calc;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		calc++;
	}
	return (calc);
}
