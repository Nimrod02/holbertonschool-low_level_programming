#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of the matrix
* @height: height of the matrix
*
* Return: grid
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		grid[index] = malloc(sizeof(int) * width);
		if (grid[index] == NULL)
		{
			for (index = 0; index < height; index++)
				free(grid[index]);

			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
