#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - A function to print the elements of a doubly linked list
 * @h: The supposed head of the list
 * Return: The number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h && h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
