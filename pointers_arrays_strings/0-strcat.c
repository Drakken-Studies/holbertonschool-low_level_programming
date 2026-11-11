#include "main.h"
/**
 *
 * _strcat - function that concatenates two strings.
 */
char *_strcat(char *dest, char *src)
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
	while (src[s] != '\0')
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
