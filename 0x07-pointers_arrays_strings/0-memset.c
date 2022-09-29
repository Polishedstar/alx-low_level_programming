#include "main.h"
/**
 *_memset - fills memory with aconstant bytes.
 *fills the first n bytes of the memmory area  pointer
 * to by s with constant b.
 * @s: pointer to memeory area or starting address of memoty to be filled.
 * @b: constant to fill memory with.
 * @n: number of bytes to be filled starting from b to be filled.
 * Return: pointer to memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
