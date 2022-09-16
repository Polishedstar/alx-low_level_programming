#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a line using the _ character
 * @n: Number of times to print '_' character
 * Description: This function takes an integer as argument
 * and repeatedly prints the character '_' in order to
 *  form a line on the screen.
 *  Return: Void
 */
void print_line(int n)
{
int a = 0;
while (a < n && n > 0)
{
putchar('_');
a++;
}
putchar('\n');
}
