#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - multiply 3 and 5 to 1024
 *
 *
 * Return: always success
*/
int main(void)
{
	int index, sum = 0;

	for (index = 0; index < 1024; index++)
	{
		if (index % 3 == 0 || index % 5 == 0)
		{
			sum = sum + index;
		}
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
