#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  function that executes a function given as a parameter
 *	on each element of an array.
 *
 * @array: pointer to provided array.
 * @size: size of given array.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
