#include "main.h"
/**
 * swap_int - swap the value of two integers
 *
 * @a: the first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
