#include "hash_tables.h"

/**
 * hash_table_delete - A function to free the memory used  by a hash table
 *
 * @ht: The hash table pointer
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int i;
	int used_node;

	if (!ht)
		return;
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		used_node = 0;
		while (node != NULL)
		{
			used_node = 1;
			free(node->key);
			free(node->value);
			temp = node->next;
			free(node);
			node = temp;
		}
		if (used_node)
			free(node);
		i++;
	}
	free(ht->array);
	free(ht);
}
