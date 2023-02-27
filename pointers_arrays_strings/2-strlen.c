#include "main.h"
#include <string.h>

/**
 * _strlen - give the lengh of a string
 * @s: the string
 *
 * Return: the lengh of s
 */

int _strlen(char *s)
{
	int length = 0;

		for (; *s != '\0'; s++)
		{
			length++;
		}
	return (length);
}
