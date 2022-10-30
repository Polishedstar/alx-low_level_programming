#include "lists.h"
/**
 * print_listint - prints all elements if a linked lists
 * @h:  pointing to prior to next node
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t non = 0;  /* non means num of nodes*/
while (h)
{
printf("%d\n", h->n);
non++;
h = h->next;
}
return (non);
}
