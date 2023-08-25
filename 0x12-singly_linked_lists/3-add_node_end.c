#include "lists.h"

/**
 * add_node_end + Add a node to the end of a linked list
 *
 * @head: A pointer to the address of the head
 * @str: The content of the new node
 * Return: Pointer tot the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *new_head;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = NULL;
	new_head = *head;
	if (new_head == NULL)
	{
		
	}
	return (new_node);
}
