#include "main.h"

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
 * puts_half - prints
 * @str: string
 */

void puts_half(char *str)
{
	int a, length = _strlen(str);

		if (length % 2 != 0)
			a = length / 2 + 1;
		else
			a = length / 2;
		while (a < length)
		{
			_putchar (*(str + a));
			a++;
		}
		_putchar('\n');
}
