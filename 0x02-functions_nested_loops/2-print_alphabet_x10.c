#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet ten times
 *
 * Description: print out all the letters of the english alphabet
 * to the screen ten times.
 * Return: Void
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
