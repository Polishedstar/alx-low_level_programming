#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the strings provided to searched.
 * @accept: the bytes to search
 * Return: a pointer to the bytes in @s that matches in @s that
 * matches ones of the bytes in @accept or NULL if no
 * such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
s = &s[i];
return (s);
}
}
i++;
}
return (NULL);
}
