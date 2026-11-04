#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: will be checked if is lowercase
 *
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
