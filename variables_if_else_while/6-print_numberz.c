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
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	{
		putchar('\n');
	}
	return (0);
}
