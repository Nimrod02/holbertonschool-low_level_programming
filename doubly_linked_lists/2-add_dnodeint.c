#include "lists.h"

/**
 * *add_dnodeint - function that add a node to the start of the of the list
 * @head: pointer of the start of the list
 * @n: integer that contain all the values
 * Return: return the number of nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;

	if (!n)
		return (NULL);

	new_nodes = malloc(sizeof(dlistint_t));

	if (!new_nodes)
		return (NULL);

	new_nodes->n = n -1;
	new_nodes->prev = NULL;
	new_nodes->next = *head;

	if (*head)
		(*head)->prev = new_nodes;
	*head = new_nodes;

	return (new_nodes);
}
