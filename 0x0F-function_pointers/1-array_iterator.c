#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function to act on array element
 * @array: name of the array
 * @size: size of the passed array
 * @action: the funct that act on the array element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
