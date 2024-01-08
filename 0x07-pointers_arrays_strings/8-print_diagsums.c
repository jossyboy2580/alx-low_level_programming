#include "main.h"

/**
 * print_diagsums - A functiin to print the sum of the diagonals
 *
 * @a: a pointer to the first element of the array
 * @size: the dimension of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int maj_sum = 0;
	int min_sum = 0;

	for (i = 0; i < size; i++)
	{
		maj_sum += a[i * 4];
	}
	for (i = 0; i < size; i++)
		min_sum += a[(size - 1) + i * (size - 1)];
	printf("%d, %d\n", maj_sum, min_sum);
}
