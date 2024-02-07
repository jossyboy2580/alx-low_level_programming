#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 *
 * @head: The head of the linked list
 * Return: pointer to the head of the reversed linked list
 */

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
