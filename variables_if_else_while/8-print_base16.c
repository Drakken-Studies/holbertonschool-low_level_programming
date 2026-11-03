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
	char i = 48;

	while (i <= 102)
	{
	if (i < 58 || i > 96)
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
