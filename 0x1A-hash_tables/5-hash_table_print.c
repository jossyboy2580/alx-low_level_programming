#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a harsh table
 *
 * @ht: Thw hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int first;

	if (!ht)
		return;
	i = 0;
	putchar('{');
	first = 1;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (first == 0)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
		i++;
	}
	putchar('}');
	putchar('\n');
}
