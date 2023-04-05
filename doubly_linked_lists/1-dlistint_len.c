#include "lists.h"

/**
 * 
 * 
 * 
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t new_nodes = 0;


	while (h)
	{
		h = h->next;
		new_nodes++;

	}
	return (new_nodes);
}
