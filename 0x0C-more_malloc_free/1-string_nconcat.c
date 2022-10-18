#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concat two strings
 * @s1: first string to copy
 * @s2: second string string to copy
 * @n: num of bytes of s2 to copy
 * Return: char pointer to newly allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int sz1 = 0, sz2 = 0, i;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[sz1] != '\0')
{
sz1++;
}
while (s2[sz2] != '\0')
{
sz2++;
}
if (n > sz2)
n = sz2;
p = malloc((sz1 + n + 1) * sizeof(char));
if (p == NULL)
return (0);
for (i = 0; i < sz1; i++)
{
p[i] = s1[i];
}
for (; i < (sz1 + n); i++)
{
p[i] = s2[i - sz1];
}
p[i] = '\0';

return (p);
}
