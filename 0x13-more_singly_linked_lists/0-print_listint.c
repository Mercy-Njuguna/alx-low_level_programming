#include "lists.h"

/**
 * @h: struct listint_t
 * print_listint - print integer in list
 * Return:value of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
