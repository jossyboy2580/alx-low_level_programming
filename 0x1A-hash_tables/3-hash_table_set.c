#include "hash_tables.h"

/**
 * hash_table_set - A fuction to place a key/value pair in a
 * hash table
 *
 * @ht: The pointer to the hash table
 * @key: the insertion key
 * @value: The value associated with the key
 *
 * Return: status of the operation, 1 for successful
 * 0 for otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	int key_ind;

	if (!ht)
		return (0);
	if (!key || strlen(key) < 1)
		return (0);
	/* Make a new node */
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	/* Get the index it should take */
	key_ind = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[key_ind])
		ht->array[key_ind] = node;
	else
	{
		node->next = ht->array[key_ind];
		ht->array[key_ind] = node;
	}
	return (1);
}
