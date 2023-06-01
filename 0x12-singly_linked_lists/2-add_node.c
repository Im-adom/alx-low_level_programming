#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: a string
 * Return: address of the new element of NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newly;
	unsigned int len = 0;

	while (str[len])
		len++;

	newly = malloc(sizeof(list_t));
	if (!newly)
		return (NULL);

	newly->str = strdup(str);
	newly->len = len;
	newly->next = (*head);
	*(head) = newly;
	return (*head);
}
