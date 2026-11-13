#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @needle: substring searching for in 'haystack'
 * @haystack: where to search of 'needle'
 *
 * Return: pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		c = 0;
		while (needle[c] != '\0')
		{
			if (needle[c] == haystack[i + c])
			{
				c++;
			}
			else
			{
				break;
			}
		}
		if (needle[c] == '\0')
		{
			return (&haystack[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
