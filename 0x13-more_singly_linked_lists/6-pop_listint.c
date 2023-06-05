#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * linked list and returns head node's data (n).
 * @head: a pointer to the head of the list
 * Return: data of the head node (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;

	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
