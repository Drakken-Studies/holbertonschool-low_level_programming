#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: provided string array.
 *
 * Return: string as integer.
 */
int _atoi(char *s)
{
	int i;
	int total;
	int sign;
	int dig;

/*
 * dig - counts when digits start
 * i - array index counter
 * total - number to return
 * sign - tracking '-'s to reverse them
 */
	dig = 0;
	i = 0;
	total = 0;
	sign = -1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig++;
/*Soooo important!!! Works out stacks the digts in the right spot!*/
			total = ((total * 10) - (s[i] - '0'));
		}
		else if (dig > 0)
		{
			break;
		}
		i++;
	}
	return (total * sign);
}
