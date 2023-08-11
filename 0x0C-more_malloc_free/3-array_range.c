#include "main.h"

/**
 * array_range - Create an array with a range of values
 *
 * @min: The minimum value inclusive
 * @max: The maximum value inclusive
 * Return: A pointer to the array
 */

int *array_range(int min, int max)
{
	int *new_mem;
	int i, input;

	if (min > max)
		return (NULL);

	new_mem = malloc(sizeof(int) * (max - min + 1));
	if (new_mem == NULL)
		return (NULL);
	input = min;
	for (i = 0; i < (max - min + 1); i++)
	{
		new_mem[i] = input;
		input++;
	}
	return (new_mem);
}
