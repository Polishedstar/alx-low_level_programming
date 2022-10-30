#include "lists.h"
/**
 * pop_listint - delete the head bode
 * @head: pointet to the fist node
 * Return: the data inside the elements that was
 * deleted or 0 if the list free
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || *head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
