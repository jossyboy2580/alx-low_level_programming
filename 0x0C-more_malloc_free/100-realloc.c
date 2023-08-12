#include "main.h"
#include <string.h>

int get_max(unsigned int, unsigned int);
int get_min(unsigned int, unsigned int);

/**
 * _realloc - A program to reallocate some space
 *
 * @ptr: The pointer to be reallocated
 * @old_size: Size of ptr before reallocation
 * @new_size: Size of ptr after reallocation
 * Return: A pointer to the ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *dummy;
	void *new_mem;

	if (ptr == NULL)
	{
		dummy = malloc(new_size);
		if (dummy)
			return (dummy);
		else
			return (NULL);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_mem = malloc(get_max(old_size, new_size));
	if (!new_mem)
		return (NULL);
	memcpy(new_mem, ptr, get_min(old_size, new_size));
	free(ptr);
	return (new_mem);
}

/**
 * get_max - Return the maximum of two ints
 *
 * @a: First int
 * @b: Second int
 * Return: An int the largest
 */

int get_max(unsigned int a, unsigned int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * get_min - Return the minimum of two ints
 *
 * @a: First int
 * @b: Second int
 * Return: The  smallest
 */

int get_min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}
