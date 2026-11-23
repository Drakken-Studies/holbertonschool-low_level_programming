#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function to print name with given function pointer *f.
 *
 * @f: pointer to function.
 * @name: provided name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
