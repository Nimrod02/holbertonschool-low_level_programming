#include "lists.h"

/**
 * dlistint_len - main function that return the number of nodes
 * @h: pointer that contains the nodes
 *
 * Return: number of nodes
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
