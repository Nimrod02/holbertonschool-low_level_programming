#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, index2 = 0;

	while (dest[index] != '\0')
		index++;

	while (src[index2] != '\0' && index2 < n)
	{
		dest[index] = src[index2];
		index++;
		index2++;
	}

	dest[index] = '\0';

	return (dest);
}
