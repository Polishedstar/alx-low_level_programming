#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: ptr to what to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
