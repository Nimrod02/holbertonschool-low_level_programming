#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string
 *
 * Return: the length
 */

int _strlen_recursion(char *s)

{
	int length = 0;

	if (s[length] >= '0' && s[length] != '\0')
	{
		length++;
		return (*s);
	}
	_strlen_recursion(s + 1);
	return (0);
}
