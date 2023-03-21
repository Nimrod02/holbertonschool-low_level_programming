#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - main function
 * @array: array of 5 cases
 * @size: size of the array
 * @action: operate the function
 *
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array == NULL || action == NULL)
		return;

	for (; index < size; index++)
		action(array[index]);
}
