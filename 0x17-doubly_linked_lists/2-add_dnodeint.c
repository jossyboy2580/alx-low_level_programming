#include "lists.h"

/**
 * add_dnodeint - A function to a a node to head of doubly linked list
 * @head: The head of the node
 * @n: The value of the node
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *moving_head = *head;

	while (moving_head->prev != NULL)
		moving_head = moving_head->prev;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	return (new_node);
}
