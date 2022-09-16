#include <stdio.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal to the screen
* @n: The number of '\' to print in order to form the diagonal
*Description: This function will repeatedly print '\' followed
* by a new line to the screen in order to create a diagonal line
* on the screen.
* Return: Void
*/
void print_diagonal(int n)
{
int i = 0, ii;
while (i < n && n > 0)
{
ii = 0;
while (ii < i)
{
putchar(' ');
ii++;
}
putchar('\\');
putchar('\n');
i++;
}
if (i == 0)
putchar('\n');
}
