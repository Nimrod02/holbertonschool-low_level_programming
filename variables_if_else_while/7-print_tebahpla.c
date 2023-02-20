#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
