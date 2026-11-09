#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 *
 */

int main(void)
{
	int choice;
	
	do
	{
		printf("\nWelcome to Adam's Calculator\n");
		printf("1) Add\n");
		printf("2) Subract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("\nEnter your choice (0 to 4):");
		scanf("%d", &choice);

		if (choice < 0 || choice > 4)
		{
			printf("\n\nInvalid choice\n\n");
		}		
		else if (choice == 1)
		{
			int a;
			int b;
			int sum;

			printf("\n\n**ADDITION**\n");
			printf("Please enter 2 numbers to ADD together, separated by a comma (eg. \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a + b);
			printf("\n\nAnswer = %d\n\n", sum);
		}
		else if (choice == 2)
		{
			int a;
			int b;
			int sum;
			
			printf("\n\n**SUBTRACTION**\n");
			printf("Please enter 2 numbers, one SUBTRACTS ");
			printf("from the other, separated by a comma (eg \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a - b);
			printf("\n\nAnswer = %d\n\n", sum);
		}
		else if (choice == 3)
		{
			int a;
			int b;
			int sum;

			printf("\n\n**MULTIPLICATION**\n");
			printf("Please enter 2 numbers to MULTIPLY, separated by a comma (example \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a * b);
			printf("\n\nAnswer = %d\n\n", sum);
		}
		else if (choice == 4)
		{
			int a;
			int b;
			int sum;

			printf("\n\n**DIVISION**\n");
			printf("Please enter 2 numbers, one DIVIDED by");
			printf("the other, separated by a comma (example \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			if (b == 0)
			{
				printf("\n\nError: division by zero\n\n");
			}
			else
			{
				sum = (a / b);
				printf("\n\nAnswer = %d\n\n", sum);
			}
		}
		else if (choice == 0)
		{
			printf("\n\nBye!\n\n");
		}
	}
	while (choice != 0);
	return (0);
}
