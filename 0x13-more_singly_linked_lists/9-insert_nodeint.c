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
	unsigned int i = -1;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (head)
	{
		if (i == idx - 1)
		{
			new_node->next = head->next;
			head->next = new_node;
			return (new_node);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
