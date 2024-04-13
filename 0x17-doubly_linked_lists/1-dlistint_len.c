#include "lists.h"

/**
 * dlistint_len - A function to print the length of a doubly linked list
 * @h: The head of the list
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h && h->prev != NULL)
		h = h->prev;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
