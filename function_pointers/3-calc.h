#ifndef CALC_H
#define CALC_H

/**
 * op_add - returns the sum of a and b. 
 * op_sub - returns the difference of a and b. 
 * op_mul - returns the product of a and b.
 * op_div - returns the result of the division of a by b.
 * op_mod - returns the remainder of the division of a by b. 
 * get_op_func - function returns a pointer to the function that corresponds
 * 	to the operator given as a parameter
 */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#endif
