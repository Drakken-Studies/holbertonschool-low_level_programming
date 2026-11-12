#include "main.h"

/**
 * _strncpy - function that concatenates two strings.
 *
 * @dest: destination for copied string.
 * @src: source string.
 * @n: number of bytes to copy to destination string.
 *
 * Return: copied strins back to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/*
	* i - counter for dest array index
	*/
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = sr[i];
		i++;
	}
	while (src[i] == '\0' && i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
