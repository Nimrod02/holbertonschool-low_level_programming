#include "lists.h"

/**
 * print_dlistint - main function that print all the elements
 * @h: string
 *
 * Return: retun the number of nodes use
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t new_nodes = 0;


	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		new_nodes++;

	}
	return (new_nodes);
}
