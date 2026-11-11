#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @a: counter for string len, also array index.
 * @b: counter for array index for 'c'.
 * @c: reversed string array.
 */
void rev_string(char *s)
{
	int a;
	int b;
	char c;
	char d;
	char temp;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	c = s[a];
	d = s[b];
	while (a != b)
	{
		c = s[a];
		d = s[b];
		temp = c;
		c = d;
		d = temp;
		s[a] = c;
		s[b] = d;
		a--;
		b++;
	}
}
