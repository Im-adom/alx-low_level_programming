#include "lists.h"
/**
 * delete_dnodeint_at_index - This function deletes
 * the node at index of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 on success and -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	unsigned int x = 0;

	ptr1 = *head;

	if (ptr1 != NULL)
		while (ptr1->prev != NULL)
			ptr1 = ptr1->prev;

	while (ptr1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = ptr1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr2->next = ptr1->next;

				if (ptr1->next != NULL)
					ptr1->next->prev = ptr2;
			}

			free(ptr1);
			return (1);
		}
		ptr2 = ptr1;
		ptr1 = ptr1->next;
		x++;
	}

	return (-1);
}
