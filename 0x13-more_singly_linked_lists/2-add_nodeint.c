#include "lists.h"

/**
 * add_nodeint - A function to add a node at thw beginning of a list
 *
 * @h: The head of the list;
 * @n: the xontent of the new node
 * Return: The address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
