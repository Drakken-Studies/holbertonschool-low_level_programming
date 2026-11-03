#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * Main: Entry point
 *
 * Description - detects whether random number (n) is
 * positive, negative or zero.
 *
 * Return: 0 - successful execution.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("is zero\n");
	}
	else if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is negative\n");
	return (0);
}
