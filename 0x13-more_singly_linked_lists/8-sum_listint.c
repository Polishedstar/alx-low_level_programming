#include "lists.h"
/**
 * sum_listint - sum of thr data in linked list
 * @head: ptr to the firat node
 * Return: sum of data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
