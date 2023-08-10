#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 *
 * @b: The number of bytes to allocate
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (!new)
		exit(98);
	return (new);
}
