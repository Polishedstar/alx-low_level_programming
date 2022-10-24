#include "lists.h"
/**
 * add_node -  a function that adds a new node
 * @head: head of a linked list
 * @str: sring
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t a = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
while (str[a])
a++;
new->str = strdup(str);
new->len = a;
new->next = *head;
*head = new;
return (*head);
}
