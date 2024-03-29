#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees the space occupied by dog
 *
 * @d: The dog we want to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
