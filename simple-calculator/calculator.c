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
		printf("Welcome to Adam's Calculator\n");
		printf("1) Add\n");
		printf("2) Subract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Enter your choice (0 to 4):");
		scanf("%d", &choice);
	
		if (choice == 1)
		{
			int a;
			int b;
			int sum;

			printf("**ADDITION**\n");
			printf("Please enter 2 numbers to ADD together, separated by a comma (eg. \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a + b);
			printf("Answer = %d\n\n\n", sum);
		}
		else if (choice == 2)
		{
			int a;
			int b;
			int sum;
			
			printf("**SUBTRACTION**\n");
			printf("Please enter 2 numbers, one SUBTRACTS ");
			printf("from the other, separated by a comma (eg \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a + b);
			printf("Answer = %d\n\n\n", sum);
		}
		else if (choice == 3)
		{
			int a;
			int b;
			int sum;

			printf("**MULTIPLICATION**\n");
			printf("Please enter 2 numbers to MULTIPLY, separated by a comma (example \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a + b);
			printf("Answer = %d\n\n\n", sum);
		}
		else if (choice == 4)
		{
			int a;
			int b;
			int sum;

			printf("**DIVISION**\n");
			printf("Please enter 2 numbers, one DIVIDED by");
			printf("the other, separated by a comma (example \"3,4\"): ");
			scanf("%d,%d", &a, &b);
			sum = (a + b);
			printf("Answer = %d\n\n\n", sum);
		}	
	}
	while (choice != 0);
	return (0);
}
