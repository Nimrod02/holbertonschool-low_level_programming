#include "main.h"
#include <string.h>

/**
 * _strlen - give the lengh of a string
 * @str: the string
 *
 * Return: the lengh of s
 */

int _strlen(char *str)
{
	int length = 0;

		for (; *str != '\0'; str++)
		{
			length++;
		}
	return (length);
}

/**
 * puts2 - give 1 char every 2
 * @str: list of char
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _sterlen(str); a = +2)
	{
		_putchar (str[a]);
	}
	_putchar ('\n');
}
