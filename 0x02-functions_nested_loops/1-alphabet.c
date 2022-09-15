#include "main.h"
/**
 * print_alphabet - prints alphabet to terminal
 *
 *  Description: Prints the letters of the english alphabet
 *   in lowercase to the terminal.
 *  Return: void
 */
void print_alphabet(void)
{
char al;
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');
}
