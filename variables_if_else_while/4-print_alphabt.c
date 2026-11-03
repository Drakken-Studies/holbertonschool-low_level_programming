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
	char i = 'a';

	while (i <= 'z')
	{
	if (i != 'e' && i != 'q')
	{
		putchar(i);
	}
	{
		i++;
	}
	}
	putchar('\n');
	return (0);
}
