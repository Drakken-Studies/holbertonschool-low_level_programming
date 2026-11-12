#include "main.h"
/**
 * string_toupper - converts a string to all uppercase.
 *
 * @s: supplied array.
 *
 * Return: returns converted string.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = (s[i] - 32);
			}
			else if (s[i - 1] == ' ' ||
				s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n'
				)
			{	
				s[i] = (s[i] - 32);
			}
		}
		i++;
	}
	return (s);
}
