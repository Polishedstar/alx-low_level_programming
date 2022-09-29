#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: Where to copy the memory to, that is the destination
 * @n: the number of bytes
 * @src: The memory source area to copy from
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
