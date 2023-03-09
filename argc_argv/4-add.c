#include <stdio.h>
#include <stdlib.h>

/**
 * main - add
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num = 1, digit = 0, sum = 0;

	for (; num < argc; num++)
	{
		for (; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}
