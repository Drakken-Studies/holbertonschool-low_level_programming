#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/*
 * _putchar - custom function for putchar
 *
 * reset_to_98 - function that takes a pointer to an int as parameter and
 * 	updates the value it points to to 98.
 *
 * swap_int - function that swaps the values of two integers
 *
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * rev_string - function that reverses a string.
 *
 * puts2 - function that prints every other character of a string, 
 * 	starting with the first character, followed by a new line.
 *
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * print_arry - function that prints n elements of an array of integers,
 *	followed by a new line.
 *
 * _strcpy - function that copies the string pointed to by src, including
 *	the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * _atoi - function that convert a string to an integer.
 *
 * _strcat - function appends the src string to the dest string,
 *	overwriting the terminating null byte (\0) at the end of dest,
 *	and then adds a terminating null byte.
 *
 * _strncat - function that concatenates two strings. 
 *
 * _strncpy - function that copies a string.
 *
 * _strcmp - function that compares two strings.
 *
 * reverse_array - function that reverses the content of an array of integers.
 *
 * string_toupper - function that changes all lowercase letters of a string to
 * 	uppercase.
 *
 * cap_string - function that capitalizes all words of a string.
 *
 * leet - function that encodes a string into 1337.
 *
 * _memset - function that fills memory with a constant byte.
 *
 * _memcpy - function that copies memory area.
 *
 * _strchr - function that locates a character in a string.
 *
 * _strspon - function that gets the length of a prefix substring.
 */

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);

#endif
