#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked
 * @h: singly linked lis
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
size_t count;
count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
