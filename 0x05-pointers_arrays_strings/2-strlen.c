#include "main.h"

/**
 *_strlen - returns the length of a String
 * @s: String whose length we want to determine
 *
 * Return: length of the String
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
