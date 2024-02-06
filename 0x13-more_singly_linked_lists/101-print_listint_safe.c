#include "lists.h"

int is_visited(listint_t **visited, listint_t *head, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		if (visited[i] == head)
			return (1);
		i++;
	}
	return (0);
}

void add_visited(listint_t ***visited, listint_t *head, size_t count)
{
	listint_t **new_visited;

	new_visited = realloc(*visited, sizeof(listint_t *) * (unsigned int)count);
	if (!new_visited)
	{
		free(*visited);
		exit(98);
	}
	*visited = new_visited;
	(*visited)[count - 1] = head;
}


size_t print_listint_safe(const listint_t *head)
{
	listint_t **visited = NULL;
	size_t printed = 0;
	listint_t *new_head = (listint_t *)head;

	while (new_head)
	{
		printed++;
		if (is_visited(visited, new_head, printed))
			break;
		printf("[%p] %d", (void *)new_head, new_head->n);
		add_visited(&visited, new_head, printed);
		new_head = new_head->next;
	}
	return (printed);
}
