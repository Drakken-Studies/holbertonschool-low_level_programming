#ifndef CALC_H
#define CALC_H

/**
 * op_add - returns the sum of a and b.
 * op_sub - returns the difference of a and b.
 * op_mul - returns the product of a and b.
 * op_div - returns the result of the division of a by b.
 * op_mod - returns the remainder of the division of a by b.
 * get_op_func - function returns a pointer to the function that corresponds
 *	to the operator given as a parameter
 *
 * op_add - adds two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: sum of a and b.
 *
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - stores an operator and its function pointer.
 * @op: string representing the mathematical operator.
 * @f: pointer to the function performing the operation.
*/

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
