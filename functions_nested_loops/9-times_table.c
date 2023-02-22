#include "main.h"
#include <stdio.h>
/**
 * void times_table(void)
 *
 * Return: void
 */

void times_table(void)
{
	int col, lig, res;
		for (lig = 0; lig <= 9; lig++)
		{
			for (col = 0; col <= 9; col++)
			{
				res = (lig * col);

				if (col == 0)
				{
					_putchar('0' + res);
				}
				else if (res <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
				else if (res > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
			}
			_putchar('\n');
		}
}

