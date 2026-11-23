#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/*
 * print_name - function that prints a name.
 *
 * array_iterator - function that executes a function given as a parameter
 *	on each element of an array.
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
