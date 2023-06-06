#include "lists.h"
/**
 * sum_listint-  sum of all the data (n) of a listint_t linked list.
 * @head: head node in the linked list
 * Return: the total sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
