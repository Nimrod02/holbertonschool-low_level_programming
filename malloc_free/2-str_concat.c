#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int index1 = 0, index2 = 0;
	int length = 0;
	char *tmp;

	if (s1 == NULL)

		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (; s1[index1] || s2[index1]; index1++)
		length++;

	tmp = malloc(length * sizeof(char));

	if (tmp == NULL)
		return (NULL);

	for (index1 = 0; s1[index1]; index1++)
		tmp[index2++] = s1[index1];

	for (index1 = 0; s2[index1]; index1++)
		tmp[index2++] = s2[index1];

	return (tmp);
}
