#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to array provided.
 * @size: size of provided array.
 * @cmp: pointer to function.
 *
 * Return: -1 if passed values NULL else return i.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (array[i]);
		{
		i++;
	}
	return (-1);
}
