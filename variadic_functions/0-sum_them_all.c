#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - main funtion that add all the variables
 * @n: unsigned int that contain all variables
 *
 * Return: sum of the operation.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (; index < n; index++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
return (sum);
}
