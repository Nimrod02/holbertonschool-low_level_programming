#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: pointer
 * @src: source
 * @n:
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0' && index < n; index++)
	{
		if (n > 0)
		{
			dest[index] = src[index];
		}
	}
			while (index < n)
			{
				dest[index] = '\0';
				index++;
			}
	return (dest);
}
