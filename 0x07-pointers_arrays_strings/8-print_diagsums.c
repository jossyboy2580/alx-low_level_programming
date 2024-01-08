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
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * 4];
	}
	printf("%d\n", sum);
}
