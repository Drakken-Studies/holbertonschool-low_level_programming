#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @d: number to be checked
 *
 * Return: Value of last digit
 */
int print_last_digit(int d)
{
	int i = (d % 10);
	
	if (i < 0)
	{
		i = -i;
	}
	{
		_putchar(i + '0');
		return (i);
	}
}
