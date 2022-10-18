#include "3-calc.h"

/**
 * op_add - calculates the sum of two int
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs two integer
 * @a: int 1
 * @b: int 2
 * Return: diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the products of two integers
 * @a: first int
 * @b: integers to multiply togetther
 * Return: prod of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: first int
 * @b: second int
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get the remainder of two integers
 * @a: first int
 * @b: second int
 * Return:  remainder of a division b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
