#include "main.h"

/**
 * print_diagsums - A functiin to print the sum of the diagonals
 *
 * @a: a pointer to the first element of the array
 * @size: the dimension of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, major_diag, minor_diag;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				major_diag += a[i][j];
			if ((i + j) == size)
				minor_diag += a[i][j];
		}
	}
}
