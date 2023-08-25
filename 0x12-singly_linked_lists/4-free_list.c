#include "lists.h"

/**
 * free_list - A func to free the memory space occupied by
 * a linked list
 *
 * @head: Pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nexter;

	while (current)
	{
		nexter = current->next;
		free(current->str);
		free(current);
		current = nexter;
	}
}
