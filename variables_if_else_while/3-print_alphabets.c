#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 - Successful execution.
 *
 */
int main(void)
{
	char i = 'a';
	char c = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	{
		putchar('\n');
	}
	return (0);
}
