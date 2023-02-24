#include "main.h"

/**
 * print_diagonal - print
 * @n: size
 */

void print_diagonal(int n)
{
	int l, c;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			for (c = 1; c <= n; n++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	
	}
	else
	{
		_putchar ('\n');
	}
}
