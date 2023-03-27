#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - main function that print a character
 * @form: format
 *
*/
void print_char(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * print_int - main function that print a integer
 * @form: format
 *
*/

void print_int(va_list form)
{
	printf("%d", va_arg(form, int));
}

/**
 * print_float - main function that print a float
 * @form: format
 *
*/

void print_float(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * print_string - main function that print a string
 * @form: format
 *
*/

void print_string(va_list form)
{
	char *str;

	str = va_arg(form, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - main function that print all the type asked
 * @format: array of data type
 *
*/

void print_all(const char * const format, ...)
{
	char *space = "";
	int index1 = 0, index2 = 0;

	va_list dt;

	typefinder choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	va_start(dt, format);
	while (format != NULL && format[index2] != '\0')
	{
		while (choice[index1].letter != '\0')
		{
			if (choice[index1].letter == format[index2])
			{
				printf("%s", space);
				choice[index1].func(dt);
				space = ", ";
			}
			index1++;
		}
		index2++;
	}
	va_end(dt);
	printf("\n");
}
