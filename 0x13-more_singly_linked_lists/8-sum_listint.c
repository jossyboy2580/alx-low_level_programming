#include "lists.h"

/**
 * sum_listint - Sum the values of a list
 *
 * @head: The head of the list
 * Return: Integer value for the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
