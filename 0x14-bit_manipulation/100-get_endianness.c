#include "main.h"
/**
 * get_endianness - this funct check endiannes
 * Return: 1 if little endian and 0 if ig endian
 */
int get_endianness(void)
{
unsigned int b = 1;
char *a = (char *)&b;
if (*a)
return (1);
else
return (0);
}
