#include "function_pointers.h"

/**
 * array_iterator - Iterate through an array and call a fn
 * on each element
 *
 * @array: An array
 * @size: The number of elements in the array
 * @action: Pointer to the function we need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
