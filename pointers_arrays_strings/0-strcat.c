#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be append to
 * @src: strind to append
 *
 * Return: concatenated string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
	{
	ptr++;
	}
		while (*src != 0)
		{
			*ptr++ = *src++;
			*ptr = 0;
		}

	return (dest);
}
