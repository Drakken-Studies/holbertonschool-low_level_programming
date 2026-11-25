#include <stdio.h>

/**
 * main - prints the number of args within it.
 *
 * @argc: number of command-line arguments.
 * @argv: array of command-line argument strings.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
