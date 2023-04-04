#include "lists.h"
/**
 * *add_node_end - main function that add a new node a the end of the copy node
 * @head: head orginal node
 * @str: string that contain the list of name
 * Return: return new for print or null
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	int index = 0;

	if (!(str && head))
		return (NULL);

	new = malloc(sizeof(list_t));

	if (!(new))
		return (NULL);

	for (; str[index] != '\0'; index++)
	{}

	new->str = strdup(str);

	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = index;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	end = *head;
	while (end->next)
	{
		end = end->next;
	}
	end->next = new;

	return (new);
}
