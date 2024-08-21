#include "search_algos.h"

/**
 * linear_search - A function that implements the linear
 * search algorithm
 *
 * @array: The array we want to search through for an item
 * @size: The total number of elements in the array
 * @value: The integer we are searching the array for
 *
 * Return: The position where value is located in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t moving_index;

	if (!array || size == 0)
		return (-1);
	moving_index = 0;
	while (moving_index < size)
	{
		printf("Value checked array[%lu] = [%d]\n",
			moving_index, array[moving_index]);
		if (array[moving_index] == value)
			return ((int)moving_index);
		moving_index++;
	}
	return (-1);
}
