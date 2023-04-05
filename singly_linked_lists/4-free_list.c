#include "lists.h"

/**
 * free_list - main function that free the list of nodes
 * @head: head is the start of the node list
 *
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
