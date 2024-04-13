#include "lists.h"

/**
 * add_dnodeint_end - A function to a a node to head of doubly linked list
 * @head: The head of the node
 * @n: The value of the node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	while (*head && (*head)->prev != NULL)
		*head = (*head)->prev;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		new_node->next = NULL;
		current->next = new_node;
		new_node->prev = current;
		*head = new_node;
	}
	return (new_node);
}
