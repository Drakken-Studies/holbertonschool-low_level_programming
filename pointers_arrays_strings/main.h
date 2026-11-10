#ifndef MAIN_H
#define MAIN_H
/*
 * _putchar - custom function for putchar
 *
 * reset_to_98 - function that takes a pointer to an int as parameter and
 * updates the value it points to to 98.
 *
 * swap_int - function that swaps the values of two integers
 *
 * _puts - function that prints a string, followed by a new line, to stdout.
 *
 * print_rev - function that prints a string, in reverse, followed by a new line.
 */

int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);

#endif
