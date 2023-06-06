#include "lists.h"
/**
 * find_listint_loop- finds the loop in a linked list
 * @head: the linked list we are searching for
 * Return:The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *gee = head;
	listint_t *dee = head;

	if (!head)
		return (NULL);
	while (gee && dee && dee->next)
	{
		dee = dee->next->next;
		gee = gee->next;
		if (dee == gee)
		{
			gee = head;
			while (gee != dee)
			{
				gee = gee->next;
				dee = dee->next;
			}
			return (dee);
		}
	}
	return (NULL);
}
