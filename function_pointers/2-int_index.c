#include "function_pointers"

/**
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
	{
		return;
	}
	while (i < size)
	{
		array(cmp);
		i++
	}
}
