#include "lists.h"

/**
 * free_listint - A functiin that frees a list
 * @head: The head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
