#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - main function, that search the int in the array.
 * @array: array of the values.
 * @size: number of elements in the array.
 * @cmp: compare the element of the array.
 * Return: -1 if no elements.
 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

return (-1);
}
