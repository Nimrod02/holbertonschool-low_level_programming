#include "main.h"

void print_square(int size)
{
	int column, row;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
