#include "lists.h"

/**
 * a function that returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: index of node
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *tmp;

	tmp = head;
	while (node != index && tmp != NULL)
	{
		node++;
		tmp = tmp->next;
	}

	if (node != index)
		return (NULL);
	return (tmp);
}
