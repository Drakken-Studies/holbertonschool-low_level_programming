#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: - Destination array.
 * @src: - Source array.
 * @n: - Number of bytes to copy.
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
