#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function
 * @nmemb: character
 * @size: character 2
 * Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count = 0;

	if (nmemb <= 0 || size <= 0)
	return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
