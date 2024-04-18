#include "hash_tables.h"

/**
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!key || strlen(key) < 1)
		return (NULL);
	if (!ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size)
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node);
		node = node->next;
	}
	return (NULL);
}
