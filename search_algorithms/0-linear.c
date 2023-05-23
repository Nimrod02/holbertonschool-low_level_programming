#include "search_algos.h"

/**
 * linear_search - main function for searching a key
 * @array: array of keys
 * @size: size of the array
 * @value: value store in the array
 *
 * Return: the index if success esle -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
