#include "main.h"

/**
 * reverse_array - Function that reverses the contents of an array
 *
 * @a: the array we want to reverse
 * @n: Length of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp, middle;

	middle = n / 2;
	if (n % 2 != 0)
		middle = (n - 1) / 2;
	while (i < middle)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[n - i] = temp;
		i++;
	}
}
