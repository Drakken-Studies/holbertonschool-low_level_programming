#include "main.h"
/**
 * print_square - prints the character '#' for every size given.
 *
 * @size: size given.
 *
 */
void print_square(int size)
{
	int row;
	int col;

	row = 0;
	col = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		while (row < size)
		{
			while (col < size)
			{
				_putchar(35);
				col++;
			}
			_putchar('\n');
			col = 0;
			row++;
		}
}
