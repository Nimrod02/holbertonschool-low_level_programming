#include "main.h"

/**
 * swap_int - swap the value of two pointers
 * @a: the first pointer to swap
 * @b: the second pointer to swap
 */

void swap_int(int *a, int *b)
{
	int swap;

		swap = *b;
		*b = *a;
		*a = swap;
}
