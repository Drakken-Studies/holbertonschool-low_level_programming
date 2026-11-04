#include "main.h"
/**
 *
 *
 */
void print_alphabet_x10(void)
{
	int d = 0;

	while (d <= 9)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		d++;
	}
}
