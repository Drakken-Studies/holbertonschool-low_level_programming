#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - loop until entire alphabet prints on one line.
 *
 * Return: 0 - Successful execution.
 *
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	{
		putchar('\n');
	}
	return (0);
}
