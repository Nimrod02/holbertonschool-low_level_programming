#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *dup;
	size_t length;
	
	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	dup =  malloc(length);

	if (dup == NULL)
	{
		return (NULL);
	}

	strcpy(dup, str);
	return (dup);
}
