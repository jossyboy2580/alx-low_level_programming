#include "main.h"
#include <stdlib.h>

/**
 *  * _calloc - Allocate memory for an array of nmemb elements
 *   * each with size size
 *    *
 *     * @nmemb: number of members
 *      * @size: the size of each
 *       * Return: Pointer to the new mem or NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *new_mem;

	if (size == 0 || nmemb == 0)
		return (NULL);

	new_mem = malloc(nmemb * size);
	if (!new_mem)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*((char *)new_mem + i * size) = 0;

	return (new_mem);
}

