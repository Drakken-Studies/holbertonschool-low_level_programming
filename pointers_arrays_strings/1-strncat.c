#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination for concatenated strings.
 * @src: source string.
 * @n: number of bytes to add to destination string.
 *
 * Return: concatenated strings back to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/*
	* i - counter for dest array index
	* s - counter for src array index
	*/
	int i;
	int s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	/* Checks if we've reached added byte limit */
	if (src[s] != '\0')
	{
		while (s < n)
		{
			while (src[s] != '\0')
			{
				dest[i] = src[s];
				break;
			}
			s++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
