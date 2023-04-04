#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 1;

	/*return 0 as no of nodes when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of nodes*/
		if (h->n != '\0')
			node++;

		/*go to next node*/
		h = h->next;
	}

	return (node);
}

