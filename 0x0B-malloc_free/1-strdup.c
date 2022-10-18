#include "main.h"
#include <stdlib.h>

/**
 * _strdup - array for ptinting a string
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
char *array;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
array = malloc(sizeof(char) * (i + 1));
if (array == NULL)
return (NULL);
for (r = 0; str[r]; r++)
array[r] = str[r];

return (array);
}
