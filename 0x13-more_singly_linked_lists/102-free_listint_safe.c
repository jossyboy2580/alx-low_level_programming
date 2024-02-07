#include "lists.h"

/**
 * free_recurse - A functiin to recursively free a linked list
 *
 * @head: Pointer to the current node being freed
 * @visited: An array of all freed/visited nodes
 * @count: Length of thw array visited
 * Return: The count of all freed nodes
 */

size_t free_recurse(listint_t *head, listint_t ***visited, size_t *count)
{
	listint_t *next;

	if (head == NULL)
	{
		free(*visited);
		return (*count);
	}
	if (is_visited(*visited, head, count))
	{
		free(*visited);
		return (*count);
	}
	(*count)++;
	add_visited(visited, head, *count);
	next = head->next;
	free(head);
	return (free_recurse(next, visited, count));
}

/**
 * free_listint_safe - A function to free a linked list while
 * watching out for a loop
 *
 * @h: The head of the linked list
 * Return: The number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{

	listint_t **visited = NULL;
	size_t freed = 0;
	listint_t *new_head = *h;
	*h = NULL;
	return (free_recurse(new_head, &visited, &freed));
}
