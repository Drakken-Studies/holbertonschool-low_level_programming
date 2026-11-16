#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/*
 * _putchar - custom function for putchar
 *
 * create_array - function that creates an array of chars,
 * 	and initializes it with a specific char.
 *
 * _strdup - function that returns a pointer to a newly allocated
 * 	space in memory, which contains a copy of the string given as a parameter.
 *
 * str_concat - function that concatenates two strings.
 */

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);

#endif
