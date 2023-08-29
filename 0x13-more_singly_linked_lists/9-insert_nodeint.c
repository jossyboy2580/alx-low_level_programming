#include "lists.h"

/**
 * insert_nodeint_at_index - A function to insert a node at a
 * particular index
 *
 * @head: A pointer to the head
 * @idx: the index we want to insert the node
 * @n: The content of the new node
 * Return: A pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *mover = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (mover)
	{
		if (i == idx - 1)
		{
			new_node->next = mover->next;
			mover->next = new_node;
			return (new_node);
		}
		i++;
		mover = mover->next;
	}
	return (NULL);
}
