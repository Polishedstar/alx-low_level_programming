#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allcate an array using malloc
 * @nmemb: num of elements in arr
 * @size: size of bytes in element
 * Return: void pointer to alllcated memeory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
