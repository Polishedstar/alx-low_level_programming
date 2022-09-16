#include "main.h"
#include <stdio.h>
/**
* print_numbers - print numbers to the terminal and return void
*
* Description: print numbers from 0 to 9 to the terminal
* Return: void
*/

void print_numbers(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar(10);
}
