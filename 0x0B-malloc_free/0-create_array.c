#include "main.h"
#include <stdlib.h>
/**
 * create_array - crrates an array of chars
 * @size: size of the array
 * @c: the string provided
 * Return: 0 if succesful or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *strge;
	unsigned int postn;

	if (size == 0)
	{
		return (NULL);
	}
	strge = (char *) malloc(size * sizeof(c));
	if (strge == 0)
	{
		return (NULL);
	}
	else
	{
		postn = 0;
			while (postn < size)
			{
				*(strge + postn) = c;
				postn++;
			}
		return (strge);
	}
}
