#include "main.h"
#include <stdlib.h>

/**
 * create_array - A program that dynamically allocaates the memory
 * for creating an array
 *
 * @size: A non negative value for the size of the array
 * @c: The character to populate the array with
 * Return: A pointer to the string
 */

char *create_array(unsigned int size, char c)
{
	char *new;
	unsigned int i;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(char) * size);
	if (new != NULL)
	{
		for (i = 0; i < size; i++)
			new[i] = c;
	}
	return (new);
}
