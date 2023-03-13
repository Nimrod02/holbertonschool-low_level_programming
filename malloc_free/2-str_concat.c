#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *str_concat(char *s1, char *s2)
{
	int index = 0,index1 = 0, index2 = 0;
	int length = 0;
	char* tmp;

	for (; s1[index] || s2[index]; index++)
	{
		length++;
	}
	
	tmp = malloc(length * sizeof(char));
	
	if (tmp == 0)
	{
		return (NULL);
	}

	for (; s1[index1]; index1++)
		tmp[index1++] = s1[index];
	for (; s2[index2]; index2++)
		tmp [index2++] = s2[index];
	return (tmp);
free (tmp);
}
