#include "main.h"

/**
 * _atio - function that convert a string to an integer. 
 *
 * @s: provided string array.
 *
 *
 */
int _atoi(char *s)
{
	int i;
	int total;
	int sign;
	int dig;

	dig = 0;
	i = 0;
	total = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig++;
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
