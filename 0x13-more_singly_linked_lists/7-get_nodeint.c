#include "lists.h"

/**
 * a function that returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: index of node
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cursor = 0;
	listint_t *tmp;

	tmp = head;
	while (cursor != index && tmp != NULL)
	{
		cursor++;
		tmp = tmp->next;
	}

	if (cursor != index)
		return (NULL);
	return (tmp);
}
