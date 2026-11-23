#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * print_name - function that prints a name.
 *
 */

void print_name(char *name, void (*f)(char *));
