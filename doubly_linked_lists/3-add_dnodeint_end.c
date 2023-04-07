#include "lists.h"

/**
 * *add_dnodeint_end - main function that print the list in reverse
 * @head: double pointers that point the head of the list
 * @n: list of integers
 * Return: number of nodes
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes, *temp;

	if (head == NULL)
		return (NULL);

	new_nodes = malloc(sizeof(dlistint_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (!*head)
	{
		new_nodes->prev = NULL;
		*head = new_nodes;
		return (new_nodes);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_nodes;
	new_nodes->prev = temp;

	return (new_nodes);
}
