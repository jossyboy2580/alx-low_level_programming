#include <stdlib.h>
#include "lists.h"

/**
 * add_node - A functiin that adds a node to the beginning
 * of a linked list
 *
 * @head: A pointer to the pointer of the head
 * @str: The value of the new head
 * Return: A pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
