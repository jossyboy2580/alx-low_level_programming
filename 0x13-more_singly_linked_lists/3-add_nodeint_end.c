#include "lists.h"

/**
 * add_nodeint_end - Add node to the end of a list
 *
 * @head: A pointer to the head of the list
 * @n: The content of the new node
 * Return: A pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *mover;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	mover = *head;
	if (!(*head))
		*head = new_node;
	else
	{
		while (mover)
		{
			if (mover->next == NULL)
			{
				mover->next = new_node;
				break;
			}
			mover = mover->next;
		}
	}
	return (new_node);
}
