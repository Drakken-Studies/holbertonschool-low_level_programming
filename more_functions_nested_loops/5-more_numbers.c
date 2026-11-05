#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14, 10 times on new lines.
 *
 */
void more_numbers(void)
{
	int n;
	int r;

	r = 0;
	while (r <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		r++;
	}
}
