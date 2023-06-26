#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 *
 * @a: Pointer to first value
 * @b: Pointer to second value
 */

void swap_int(int *a, int *b)
{
	int *temp = a;

	a = b;
	b = temp;
}
