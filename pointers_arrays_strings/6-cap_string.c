#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @s: supplied array.
 *
 * Return: returns capitalised string.
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
