#include "lists.h"

/**
 * free_dlistint - A function to free a doubly linked list
 * @head: The head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head->prev != NULL)
		head = head->prev;

	while (head)
	{
		next = head->next;
		free(head);
		head = next->next;
	}
}
