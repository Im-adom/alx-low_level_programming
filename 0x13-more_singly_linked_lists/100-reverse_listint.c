#include "lists.h"
/**
 * reverse_listint-  reverses a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;
	return (*head);
}
