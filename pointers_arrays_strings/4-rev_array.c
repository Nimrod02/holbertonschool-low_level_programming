#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		temp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = temp;
		beg++, end--;
	}
}
