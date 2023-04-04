#include "lists.h"

/**
 * add_nodeint_end - adds node
 * @head: head node
 * @n: value of fresh node
 * Return: struct
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_node;
	listint_t *tmp;

	fresh_node = malloc(sizeof(listint_t));
	if (fresh_node == NULL)
		return (NULL);
	fresh_node->n = n;
	fresh_node->next = NULL;
	if (*head == NULL)
	{
		*head = fresh_node;
		return (fresh_node);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = fresh_node;

		return (fresh_node);
	}
}
