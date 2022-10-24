#include <stdio.h>
/**
 * pmain - function executed prior to main
 * Return: nothing
 */
void __attribute__((constructor)) pmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
