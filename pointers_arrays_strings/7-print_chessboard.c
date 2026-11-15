#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: pointer to row with 8 characters.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int c;

	i = 0;

	while (i < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[i][c]);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
