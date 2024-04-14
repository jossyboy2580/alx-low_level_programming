#imclude "hash_tables.h"

/**
 * key_index - A function that takes a key and returns the index
 * that the value should be stored in
 *
 * @key: The key we need to hash, a string
 * @size: the size of the table
 * Return: The index xomputed by the hash function
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_ind;

	key_ind = hash_djb2(key);
	return (key_ind);
}
