#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - fibonacci sequence 50 time
 *
 *
 * Return: exit succes
*/

int main(void)
{
	int index, limit = 50, one = 1, two = 2;

	int next = one + two;

	printf("%d, %d, ", one, two);

	for (index = 3; index <= limit; index++)
	{
		printf("%d, ", next);
		one = two;
		two = next;
		next = one + two;
		if (index == limit)
			printf("\n");
	}

	return (EXIT_SUCCESS);
}
