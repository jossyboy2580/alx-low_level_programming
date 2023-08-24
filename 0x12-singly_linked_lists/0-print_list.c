#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_node - Print out a single node
 *
 * @node: preaent node to print
 * @count: pointer to the count to use
 */

void print_node(const list_t *node, size_t *count)
{
	if (node == NULL)
		return;
	if (node->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("[%lu] %s\n", strlen(node->str), node->str);
	}
	(*count)++;
	print_node((node->next), count);
}
/**
 * print_list - A functiin ti print the elems of a linked list
 *
 * @h: Poimter to the head of a linked list
 * Return: The length of the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	print_node(h, &count);
	return (count);
}
