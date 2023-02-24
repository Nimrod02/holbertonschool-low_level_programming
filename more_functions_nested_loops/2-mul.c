#include "main.h"
#include <stdio.h>

/**
 * mul - print the result of a multiplication of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the multiplication of a with b
 */

int mul(int a, int b)
{
	int res;

	scanf("%d %d", &a, &b);
	res = (a * b);
	printf("%d", res);
	return (0);
}
