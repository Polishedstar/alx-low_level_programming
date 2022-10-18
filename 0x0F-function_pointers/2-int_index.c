#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array to search for
 * @size: size of array
 * @cmp:pointer to the cmp function
 * Return: index of the first element for
 * which the cmp funct does not return
 * 0, or -1 if not match is funct
 * or size if negative.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int j;
if (array && cmp)
{
for (j = 0; j < size; j++)
{
if (cmp(array[j]) != 0)
return (j);
}
}
return (-1);
}
