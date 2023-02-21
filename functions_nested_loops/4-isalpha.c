#include "main.h"

/**
 *  _isalpha - isalpha print int c
 * @c: the character being checked
 *
 * Return: 1 if lowercase and 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
