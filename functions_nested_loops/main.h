#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - custom function for putchar
 */

int _putchar(char c);

/**
 * print_alphabet - prints alphabet on a single line, followed by a new line.
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	{
		_putchar('\n');
	}
}

#endif
