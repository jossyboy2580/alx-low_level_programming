#include "search_algos.h"

/**
 * recursive_binary_search - A recursive binary search
 *
 * @array: The search space
 * @start: The lower bound of the search space
 * @end: the upper bound of the search space
 * @value: what we are searching for
 *
 * Return: The index of value in array
 */

int recursive_binary_search(int *array, size_t start,
			    size_t end, int value)
{
	size_t mid;
	int i;


	/* Display the currently considered array */
	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i != (end - 1))
			printf(", ");
	}
	putchar('\n');

	/* Return the result if found */
	mid = (start + end) / 2;
	if (array[mid] == value)
		return (mid);

	/* Determine the new bound for the next recursive call*/
	if ((end - start) <= 1)
		return (-1);
	if (array[mid] < value)
		start = mid;
	else
		end = mid;

	/* Make that call!!!! */
	return (recursive_binary_search(array, start, end, value));
}

/**
 * binary_search - A function that implements the binary search algorithm
 *
 * @array: The array that we need to search through
 * @size: The total number of elements in the array
 * @value: The value we need to search for
 *
 * Return: The index of value in array if found, and -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array || size == 0)
		return (-1);
	return (recursive_binary_search(array, 0, size, value));
}
