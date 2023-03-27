#ifndef _VAR_FUNC_H_
#define _VAR_FUNC_H_
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dt - struct
 * @letter: letter signifying data type
 * @func: function pointer
 */
typedef struct dt
{
	char letter;
	void (*func)(va_list);
} typefinder;

#endif
