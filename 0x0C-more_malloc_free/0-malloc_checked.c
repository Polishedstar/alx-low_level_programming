#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - process of allocating memory through malloc
 *@b: integer variable which hold the memory size
 *Return: 0 if succesful
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
