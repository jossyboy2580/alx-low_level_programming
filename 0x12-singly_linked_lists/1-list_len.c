#include "lists.h"

/**
 * list_len - A funtction to calculate the length of a list
 *
 * @h: Head of the linked list
 * Return: Length of the list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
