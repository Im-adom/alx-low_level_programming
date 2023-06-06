#include "lists.h"
/**
 * free_listint_safe- frees a list with a loop
 * @h: pointer to the head of the linked list
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	int b;
	size_t l = 0;
	listint_t *ptr;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			l++;
		}
		else
		{
			free(*h);
			*h =  NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
