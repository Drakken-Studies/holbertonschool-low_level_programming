#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * _putchar - writes the character c to stdout.
 *
 * @c: number of args to pass.
 *
 * Return: 0 on success.
 */

int _putchar(char c);

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: number of args to be passed.
 *
 * Return: sum of passed ints.
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: is the string to be printed between numbers
 * @n: number of args to be passed.
 */

void print_numbers(const char *separator, const unsigned int n, ...);

#endif
