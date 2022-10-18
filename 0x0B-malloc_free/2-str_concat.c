#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function used to concatenate two strings.
 * @s1: first input
 * @s2: second input
 * Return: concat of s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
		k++;

	concat = malloc(sizeof(char) * (i + k + 1));
	if (concat == NULL)
		return (NULL);

	i = k = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		concat[i] = s2[k];
		i++, k++;
	}
	concat[i] = '\0';
	return (concat);
}
