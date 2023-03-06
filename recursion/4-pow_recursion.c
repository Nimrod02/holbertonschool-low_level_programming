#include "main.h"

/**
 * _pow_recursion - power of a number
 * @x: number
 * @y: power
 *
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 1 || y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
