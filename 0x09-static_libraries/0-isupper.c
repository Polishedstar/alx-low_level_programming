#include "main.h"
#include <stdio.h>

/**
* _isupper - checks if the giving character is uppercase or not
* @c: an integer representing the ASCII code character
*
* description: this function take a character as an argument
* and take ASCII code as an argument to determine
* if that character is an uppercase or not
* Return: return 1 if the charcter is an uppercase,
* return 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
