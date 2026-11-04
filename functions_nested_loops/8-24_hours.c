#include "main.h"
/**
 * jack_bauer - prints every minute of the day.
 *
 */
void jack_bauer(void)
{
	int h = 0

	while (h < 24)
	{
		int m = 0

		while (m < 60)
		{
			_putchar(h / 10);
			_putchar(h % 10);
			_putchar(':');
			_putchar(m / 10);
			_putchar(m % 10);
			m++;
		}
		h++;
	}
}
