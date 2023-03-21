#ifndef FUNC_POINT_H_
#define FUNC_POINT_H_
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
