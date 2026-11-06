#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: size given for tiangle
 *
 */
void print_triangle(int size)
{
	int row;
	int col;
	int s;

	row = 0;
	col = 0;
	s = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			while (col < size - row - 1)
			{
				_putchar(' ');
				col++;
			}
			while (s < row + 1)
			{
				_putchar('#');
				s++
			}
			_putchar('\n');
			row++;
			col = 0;
			s = 0;
		}
	}
}
