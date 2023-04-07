#include "lists.h"

/**
 * free_dlistint - main function that free the list
 * @head: head pointer, start of the list
 *
*/

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head->next);
		head = head->next;
	}
}
