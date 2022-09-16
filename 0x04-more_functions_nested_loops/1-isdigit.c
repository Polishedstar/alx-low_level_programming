#include "main.h"

/**
 *_isdigit - determine if c is a digit
 *
 * @c: the interger representing  the ascii code of digit
 * Return: return 1(digit), return 0 (otherwise)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
