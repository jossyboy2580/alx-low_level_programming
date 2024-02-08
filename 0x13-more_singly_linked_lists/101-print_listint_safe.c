#include "lists.h"

/**
 * is_visited - A function to check if a node has been visited
 * @visited: The address of the array of visited node
 * @head: The node we want to check
 * @count: Number of elements in visited array
 * Return: 1 if it has been visited and 0 if it hasnt
 */

int is_visited(unsigned long **visited, unsigned long head, size_t *count)
{
	size_t i;

	i = 0;
	while (i < *count)
	{
		if ((*visited)[i] == head)
			return (1);
		i++;
	}
	return (0);
}

/**
 * add_visited - A function to add a node to visited array
 * @visited: The address of the array of visited node
 * @head: The node we want to check
 * @count: Number of elements in visited array
 * Return: 1 if it has been visited and 0 if it hasnt
 */

void add_visited(unsigned long **visited, unsigned long head, size_t count)
{
	unsigned long *new_visited;

	new_visited = realloc(*visited, sizeof(unsigned long) * (unsigned int)count);
	if (!new_visited)
	{
		free(*visited);
		exit(98);
	}
	*visited = new_visited;
	(*visited)[count - 1] = head;
}

/**
 * print_recurse - A rrcursive function to print the list
 * @head: The present node we are printing
 * @visited: A pointer to an array of visited nodes
 * @count: The number of items in the visited array
 * Return: Number of unique nodes
 */

size_t print_recurse(listint_t *head, unsigned long **visited, size_t *count)
{
	if (head == NULL)
	{
		free(*visited);
		return (*count);
	}
	if (is_visited(visited, (unsigned long)head, count))
	{
		free(*visited);
		printf("-> [%p] %d\n", (void *)head, head->n);

		return (*count);
	}
	(*count)++;
	printf("[%p] %d\n", (void *)head, head->n);
	add_visited(visited, (unsigned long)head, *count);
	return (print_recurse(head->next, visited, count));
}

/**
 * print_listint_safe - A function to print the nodes of a
 * possibly cyclic linked list
 *
 * @head: The first nodr of the linked list
 * Return: Number of nodes printed
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned long *visited = NULL;
	size_t printed = 0, i;
	listint_t *new_head = (listint_t *)head;

	printed = (print_recurse(new_head, &visited, &printed));
	for (i = 0; i < printed; i++)
		free((void *)visited[i]);
	free(visited);
	return (printed);
}
