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
	size_t index = 0;

	printf("Searching in array: ");
	while (index < size)
	{
		for (index = 0; index < size; index++)
		{
			printf("%d%s", array[index], index + 1 == size ? "\n" : ", ");
			if(array[index] == value)
				return (index);
			index++;
		}
	}
	return (-1);


}
