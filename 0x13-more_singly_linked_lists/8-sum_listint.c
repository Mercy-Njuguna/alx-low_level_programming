#include "lists.h"

/**
 *a function that returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: the sum of all (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* n addded to sum*/
		sum += head->n;
		/*proceed to next node*/
		head = head->next;
	}

	/*if list will be empty it will return sum = 0*/
	return (sum);
}
