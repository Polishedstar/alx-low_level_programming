#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a
 * certain index in a linked lists
 * @head: ptr to the firat nde
 * @index: index of the node yo return
 * Return: ptr to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}
