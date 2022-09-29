#include "main.h"
#define NULL 0
/**
 * _strstr - locate or find a substring
 * @haystack: The longer and full string
 * @needle: that target substring to search
 * Return: pointer to beginning to the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j;
int x;
if (needle[0] == '\0')
return (haystack);
while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
x = i, j = 0;
while (needle[j] != '\0')
{
if (haystack[x] == needle[j])
x++, j++;
else
break;
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
i++;
}
return (NULL);
}
