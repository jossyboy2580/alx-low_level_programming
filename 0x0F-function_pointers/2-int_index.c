#include "function_pointers.h"

/**
 * int_index - A program that searches for an integer
 *
 * @array: The array we want to search
 * @size: The number of elem in the array
 * @cmp: The comparison function
 * Return: The position of the searched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
