#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that print name
 *@name: char to display to the stdout
 * @f: a pointer
 *Return: return void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
