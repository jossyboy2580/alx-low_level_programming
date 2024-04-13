 #include "hash_tables.h"

/**
 * hash_table_create - A function to create a hash table
 *
 * @size: The size of the hash table
 * Return: A pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node_arrays;

	if (!size)
		return (NUL);
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	node_arrays = malloc(sizeof(hash_node_t *) * size);
	if (!node_arrays)
	{
		free(table);
		return (NULL);
	}
	table->array = node_arrays;
	return (table);
}
