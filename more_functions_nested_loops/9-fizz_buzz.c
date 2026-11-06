#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: always 0.
 *
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf(" FizzBuzz");
			i++;
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
			i++;
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
			i++;
		}
		else
		{
			if (i == 1)
			{
				printf("%d", i);
				i++;
			}
			printf(" %d", i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
