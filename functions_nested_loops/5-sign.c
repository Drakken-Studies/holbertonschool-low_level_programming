#include "main.h"
/**
 * print_sign - checks if number is greater, less than or is 0
 *
 * @n: number to be checked
 *
 * Return: 1 if greater, 0 if zero and -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
