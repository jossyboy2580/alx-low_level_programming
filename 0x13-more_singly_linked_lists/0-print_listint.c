#include "lists.h"

/**
 * print_listint - A functiin to print the elements of a linked
 * list if integers
 *
 * @h: Pointer to the beginning of the list
 * Return: The number of nodes present
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
