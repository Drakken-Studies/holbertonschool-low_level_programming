#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two command-line arguments.
 *
 * @argc: number of command-line arguments.
 * @argv: array of command-line argument strings.
 *
 * Return: 0 for success, 1 for incorrect argument count.
 */
int main(int argc, char *argv[])
{
	int sum;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
