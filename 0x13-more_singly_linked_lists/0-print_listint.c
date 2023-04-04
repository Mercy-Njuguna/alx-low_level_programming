#include "lists.h"

/**
 * @h: struct listint_t
 * print_listint - print integer in list
 * Return:value of size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
