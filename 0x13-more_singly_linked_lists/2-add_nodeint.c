#include "lists.h"
/**
 * add_nodeint - a new node at the beginningg
 * @head: pointer to the first node
 * @n: data to fill
 * Return: pointer to the new node or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
