#include "lists.h"

/**
 * writing a function that adds a new node at the
 *              beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a_node;

	a_node = malloc(sizeof(listint_t));
	if (a_node == NULL)
		return (NULL);


	if (*head == NULL)
		a_node->next = NULL;
	else
		a_node->next = *head;

	a_node->n = n;
	*head = a_node;

	return (*head);
}
