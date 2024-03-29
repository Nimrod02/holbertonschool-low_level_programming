#include "lists.h"

/**
 * print_list - main function that print all the elements
 * @h: string
 *
 * Return: retun the number of nodes use
*/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;


	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
