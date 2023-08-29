#include "lists.h"

/**
 * listint_len - A fuction that returns the length of a list
 *
 * @h: The head of thw list
 * Return: The length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
