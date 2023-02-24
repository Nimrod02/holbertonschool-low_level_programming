#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print a traingle of a certain size
 * @size: size of the triiangle
 */

void print_triangle(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = size - row; column > 0; column--)
			{
				_putchar (' ');
			}
				for (column = row; column > 0; column--)
				{
					_putchar ('#');
				}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
	
}	
