#include "main.h"
#include "stdio.h"

/**
 * print_array - print array
 * @a: *a
 * @n: n
 */

void print_array(int *a, int n)
{
	int t = 0;
		for (; t < n; t++)
		{
			printf("%d", a[t]);
				if (t != n - 1)
				{
					printf(", ");
				}
		}
	printf("\n");
}
