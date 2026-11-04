#include "main.h"
/**
 * _isalpha - checks for upper or lowercase character
 *
 * @c: will be checked if is lowercase
 *
 * Return: 1 if true, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
