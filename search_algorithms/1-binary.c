#include "search_algos.h"

/**
 * binary_search - function for find a value in binarie
 * @array: pointer of the array to search in
 * @size: number of elements in the array
 * @value: value that we search
 *
 * Return: -1 if fail return value if succes
*/
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, mid, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (index = low; index <= high; index++)
		{
			printf("%d", array[index]);
				if (index != high)
					printf(", ");
		}
		printf("\n");

		if (array[index] == value)
			return (index);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
