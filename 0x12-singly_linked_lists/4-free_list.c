#include "lists.h"
/**
 * free_list - free list
 * @head: head f the linked_l
 * Return: no return
 */
void free_list(list_t *head)
{
list_t *current;
while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
