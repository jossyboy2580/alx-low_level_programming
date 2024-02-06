#include "lists.h"

/**
 * delete_nodeint_at_index - A function to delete a node
 *
 * @head: Head of the node
 * @index: The index we want to delete
 * Return: 1 if it succeeda and -1 if it doesnt
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *delete_me;
	listint_t *new_head = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		delete_me = *head;
		*head = delete_me->next;
		free(delete_me);
		return (1);
	}
	while (new_head && i < index)
	{
		if (i == index - 1)
		{
			delete_me = new_head->next;
			new_head->next = new_head->next == NULL ? NULL : (new_head->next)->next;
			free(delete_me);
			return (1);
		}
		new_head = new_head->next;
		i++;
	}
	return (-1);
}
