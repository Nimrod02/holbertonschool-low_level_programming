#include "main.h"

/**
 * print_line - prints as much underscore as the value of n
 * @n: the number of _
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}

