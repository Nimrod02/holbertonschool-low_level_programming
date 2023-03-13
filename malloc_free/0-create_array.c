#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 *
 * Return: pointer to array
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index = 0;

	array = malloc(size * (sizeof(char)));

	if (size == 0)
		return (NULL);
		
	if (array == NULL)
	{
		return (NULL);
	}

	for (; index < size; index++)
	{
		array[index] = c;
	}

	return (array);
	free(array);
}
