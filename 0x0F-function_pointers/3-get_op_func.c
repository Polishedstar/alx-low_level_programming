#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - this function select the correct
 * functions to perform
 * @s: the operator giving by the user
 *
 * Return: pointer to the correct output given as the parameter
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
break;
i++;
}
return (ops[i].f);
}
