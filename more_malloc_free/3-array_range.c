#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array of integers
 * @min: start range
 * @max: end range
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, index = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (; index < size; index++)
		ptr[index] = min++;
return (ptr);
}
