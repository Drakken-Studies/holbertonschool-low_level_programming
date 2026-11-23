#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for calculator
 *
 * @cnt: count for cmd arguments
 * @args: value of cmd argument
 *
 * Return: 0 on success.
 */
int main(int cnt, char *args[])
{
	int a;
	int b;
	int (*c)(int, int);

	if (cnt != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(args[1]);
	b = atoi(args[3]);
	c = get_op_func(args[2]);
	if (c == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (args[2][0] == '%' || args[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", c(a, b));
	return (0);
}
