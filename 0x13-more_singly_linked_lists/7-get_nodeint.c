#include "lists.h"

/**
 * get_nodeint_at_index Get the node at the index with this func
 *
 * @head: The head of the list
 * @index: The index we want to fetch
 * Return: The node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
