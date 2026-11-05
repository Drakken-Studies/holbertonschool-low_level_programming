#include "main.h"
/**
 * print_numbers - prints numbers 1 to 9 then newline.
 *
 */
void print_numbers(void)
{
	int i;
	i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
