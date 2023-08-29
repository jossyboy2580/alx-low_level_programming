#include "lists.h"

/**
 * free_listint2 - A functiin that frees a lost but sets the head to
 * null
 *
 * @head: The head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *new_head;
	listint_t *next;

	if (head == NULL)
		return;
	new_head = *head;
	while (new_head)
	{
		next = new_head->next;
		free(new_head);
		new_head = next;
	}
	*head = NULL;
}
