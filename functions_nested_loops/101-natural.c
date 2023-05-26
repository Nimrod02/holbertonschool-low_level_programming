#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int index, sum = 0;

	for (index = 0; index < 1024; index++)
	{
		if (index % 3 == 0|| index % 5 == 0)
			sum += index;
			printf("%d\n", sum);
	}
	return (EXIT_SUCCESS);
}
