#include "lists.h"
/**
 * sum_dlistint - This function returns the sum of all data (n)
 * of a dlistint_t linked list.
 * @head: a pointer to the head of the d linked list.
 * Return: The sum of all the data in the list or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
		sum += head->n;
		head = head->next;
		}
	}
	return (sum);
}
