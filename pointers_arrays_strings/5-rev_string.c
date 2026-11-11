#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: Pointer to string.
 *
 */
void rev_string(char *s)
{
	int a;
	int b;
	char temp;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;


	while (a > b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a--;
		b++;
	}
}
