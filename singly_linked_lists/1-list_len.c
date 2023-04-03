#include "lists.h"

/**
 * list_len - main function that count the number of elements
 * @h: pointer of the struct
 *
 * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;


	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
