#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h && h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count):
}
