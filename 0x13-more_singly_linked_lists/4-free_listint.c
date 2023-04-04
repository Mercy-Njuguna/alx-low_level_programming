#include "lists.h"

/**
 * free_listint - frees list
 * @head: struct head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head_n != NULL)
	{
		tmp = head_n;
		free(head_n);
		head_n = tmp->next;
	}

}
