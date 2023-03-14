#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: columns
 * @height: rows
 *
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int index = 0, index2 = 0;
	int **grid;

	grid = malloc(height * (sizeof(int *)));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (; index < height; index++)
	{
		grid[index] = malloc (width * (sizeof(int)));

		if (grid[index] == NULL)
		{
			for (; index2 < index; index2++)
			{
			free (grid[index2]);
			}
		free (grid);
		return (NULL);
		}

		for (index2 = 0; index2 < height; index2++)
		{
		grid[index][index2] = 0;
		}
	}
	return (grid);
}
