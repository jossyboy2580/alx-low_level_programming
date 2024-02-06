#include "lists.h"

/**
 * pop_listint - Pop the head of a listint
 *
 * @head: The head of the list
 * Return: the value of the head
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *dummy_head;

	if (*head == NULL)
		return (0);
	dummy_head = *head;
	*head = dummy_head->next;
	n = dummy_head->n;
	free(dummy_head);
	return (n);
}
