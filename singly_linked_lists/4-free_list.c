#include "lists.h"

/**
 * 
 * 
 * 
*/

void free_list(list_t *head)
{
	while (head->next)
	{
		if (head->next == NULL)
			free(head);
	}
}
