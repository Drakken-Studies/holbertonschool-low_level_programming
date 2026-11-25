#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers passed as arguments.
 *
 * @argc: number of command-line arguments.
 * @argv: array of command-line argument strings.
 *
 * Return: 0 for success, 1 if an argument contains non-digit characters.
 */
int main(int argc, char *argv[])
{
	int i; /* counter for args */
	int j; /* counter for arg characters */
	int sum; /* sum of args */

	i = 1;
	sum = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
