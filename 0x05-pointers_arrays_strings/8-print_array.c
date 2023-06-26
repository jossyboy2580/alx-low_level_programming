#include "main.h"

/**
 * print_array - print n elements of this array
 *
 * @a: the array to be printed from
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
