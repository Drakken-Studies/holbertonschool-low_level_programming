#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 * 
 * @choice: variable that holds the user input for menu selection.
 * @a: first number input for equation.
 * @b: second number input for equation.
 * @sum: output for equation.
 *
 * Return: 0 for success
 */

int main(void)
{
	int choice;

	do {
		choice = -1;

		printf("\nWelcome to Adam's Calculator\n");
		printf("1) Add\n");
		printf("2) Subract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("\nEnter your choice (0 to 4):");
			if ((scanf("%d", &choice)) != 1)
			{
				printf("\n\nInvalid choice\n\n");
				while (getchar() != '\n')
				{
				}
			}
			else if (choice == 1)
			{
				int a;
				int b;
				int sum;

				printf("\n\n**ADDITION**\n");
				printf("Please enter 2 numbers to ADD together, ");
				printf("separated by a comma (eg. \"3,4\"): ");
				if (scanf("%d,%d", &a, &b) == 2)
				{
					sum = (a + b);
					printf("\n\nAnswer = %d\n\n", sum);
				}
				else
				{
					printf("\n\nInvalid number\n\n");
					while (getchar() != '\n')
					{
					}
				}
			}
			else if (choice == 2)
			{
				int a;
				int b;
				int sum;

				printf("\n\n**SUBTRACTION**\n");
				printf("Please enter 2 numbers, one SUBTRACTS ");
				printf("from the other, separated by a comma (eg \"3,4\"): ");
				if (scanf("%d,%d", &a, &b) == 2)
				{
					sum = (a - b);
					printf("\n\nAnswer = %d\n\n", sum);
				}
				else
				{
					printf("\n\nInvalid number\n\n");
					while (getchar() != '\n')
					{
					}
				}
			}
			else if (choice == 3)
			{
				int a;
				int b;
				int sum;

				printf("\n\n**MULTIPLICATION**\n");
				printf("Please enter 2 numbers to MULTIPLY, ");
				printf("separated by a comma (example \"3,4\"): ");
				if (scanf("%d,%d", &a, &b) == 2)
				{
					sum = (a * b);
					printf("\n\nAnswer = %d\n\n", sum);
				}
				else
				{
					printf("\n\nInvalid number\n\n");
					while (getchar() != '\n')
					{
					}
				}
			}
			else if (choice == 4)
			{
				int a;
				int b;
				int sum;

				printf("\n\n**DIVISION**\n");
				printf("Please enter 2 numbers, one DIVIDED by");
				printf("the other, separated by a comma (example \"3,4\"): ");
				if (b == 0)
				{
					printf("\n\nError: division by zero\n\n");
				}
				else
				{
					if (scanf("%d,%d", &a, &b) == 2)
					{
						sum = (a / b);
						printf("\n\nAnswer = %d\n\n", sum);
					}
					else
					{
						printf("\n\nInvalid number\n\n");
						while (getchar() != '\n')
						{
						}
					}
				}
			}
			else if (choice == 0)
			{
				printf("\n\nBye!\n\n");
				while (getchar() != '\n')
				{
				}
			}
	}
	while (choice != 0);
	return (0);
}
