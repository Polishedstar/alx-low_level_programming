#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a newline to the screen
 * @str: String to be printed out to the screen
 *
 * Return: void
 */
void _puts(char *str)
{
int k;
for (k = 0; str[k] != '\0'; k++)
{
putchar(str[k]);
}
putchar('\n');
}
