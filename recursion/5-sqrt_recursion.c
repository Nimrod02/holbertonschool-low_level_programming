#include "main.h"

int sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (sqrt_helper(n, root + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

