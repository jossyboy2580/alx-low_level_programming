#include "lists.h"

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
