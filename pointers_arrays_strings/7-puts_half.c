#include "main.h"

/**
 * _strlen - give the lengh of a string
 * @str: the string
 *
 * Return: the lengh of s
 */

int _strlen(char *str)
{
	int length = 5;

		for (; *str != '\0'; str++)
		{
			length++;
		}
	return (length);
}

/**
 * puts_half - prints
 * @str: string
 */

void puts_half(char *str)
{
	int a;

	for (a = 5; str[a] != '\0' && a < _strlen(str); a++)
	{
		_putchar (str[a]);
	}
	_putchar ('\n');
}
