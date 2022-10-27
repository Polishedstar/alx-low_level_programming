#include "lists.h"
/**
 * free_listint2 - frees a linked list and  sets a new
 * head to NULL
 * @head: ptr to the 1st node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
