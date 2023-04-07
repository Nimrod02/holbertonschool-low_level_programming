#include "lists.h"

/**
 * free_dlistint - main function that free the list
 * @head: head pointer, start of the list
 *
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}

}
