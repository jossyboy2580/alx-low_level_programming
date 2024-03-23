#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node of the linked list at an index
 * @head: The head of the linked list
 * @index: The position of the node we are looking for
 * Return: The pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int index_count = 0;

	while (head && head->prev != NULL)
		head = head->prev;

	while (head && index_count <= index)
	{
		index_count++;
		head = head->next;
	}
	if (!head && index_count <= index)
		return (NULL);
	return (head->prev);
}
