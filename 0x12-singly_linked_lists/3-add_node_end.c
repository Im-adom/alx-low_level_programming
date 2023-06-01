#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @str: a string
 * @head: a double pointer to the head of the list and string
 * Return: the address of the new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newly;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newly = malloc(sizeof(list_t));

	if (!newly)
		return (NULL);

	newly->str = strdup(str);
	newly->len = len;
	newly->next = NULL;

	if (*head == NULL)
	{
		*head = newly;
		return (newly);
	}

		while (temp->next)
			temp = temp->next;
		temp->next = newly;

	return (newly);
}
