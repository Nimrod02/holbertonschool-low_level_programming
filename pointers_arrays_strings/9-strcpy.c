#include "main.h"


/**
 * _strlen - give the lengh of a string
 * @src: the string
 *
 * Return: the lengh of src
 */

int _strlen(char *src)
{
	int length = 0;

		for (; *src != '\0'; src++)
		{
			length++;
		}
	return (length);
}


/**
 * _strcpy - copies the string pointed by src into dest
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

		for (; index <= _strlen(src); index++)
		{
			dest[index] = src[index];
		}
		return (dest);
}
