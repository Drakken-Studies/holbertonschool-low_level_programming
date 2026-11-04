#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @r: number to be checked
 *
 * Return: '-int' if number is negative otherwise returns the orgiginal int
 */
int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
