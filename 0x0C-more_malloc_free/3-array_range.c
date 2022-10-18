#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array of int
 * @min: fist int num
 * @max: second int num
 *
 * Return: pointer to newly allocated memory or NULL otherwise
 */

int *array_range(int min, int max)
{
int i, k;
int *a;
if (min > max)
return (NULL);
k = max - min + 1;
a = malloc(sizeof(int) * k);
if (a == NULL)
return (NULL);
for (i = 0; i < k; i++, min++)
{
a[i] = min;
}
return (a);
}
