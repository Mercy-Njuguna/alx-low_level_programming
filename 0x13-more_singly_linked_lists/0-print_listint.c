#include "lists.h"

/**
 * print_listint - print integer in list
 * @h: struct listint_t
 * Return:value of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
