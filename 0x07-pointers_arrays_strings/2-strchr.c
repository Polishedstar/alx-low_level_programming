#include "main.h"
#define NULL 0
/**
 * _strchr - locate first occurence of char in string
 * and returns pointer.
 * @s: string provided
 * @c: target character in s
 * Return: pointer to that charcter in string
 */
char *_strchr(char *s, char c)
{
int j = 0;
while (s[j] != '\0' && s[j] != c)
j++;
if (s[j] == c)
return (&s[j]);
else
return (NULL);
}
