#include "main.h"

/**
 * sqrt_helper - find the root of n
 * @n: n
 * @root: test this root
 *
 * Return: nat square root, else -1
 */

int sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (sqrt_helper(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 *
 * Return: result1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

