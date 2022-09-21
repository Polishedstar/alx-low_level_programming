#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string to the screen
 * @str: String to be printed to the screen
 *
 * Return: void
 */

void puts_half(char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
str -= (len / 2);
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
