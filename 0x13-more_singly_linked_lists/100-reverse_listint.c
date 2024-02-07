#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = *head;
	listint_t *prev = NULL;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;
	return ((*head));
}
