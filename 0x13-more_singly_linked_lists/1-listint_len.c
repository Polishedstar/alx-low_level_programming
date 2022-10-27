#include "lists.h"
/**
 * listint_len - shows num of element in linkrd list
 * @h: pointer to thr first node of the libked list
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
size_t nodenum = 0;
while (h)
{
nodenum++;
h = h->next;
}
return (nodenum);
}
