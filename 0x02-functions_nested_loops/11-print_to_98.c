#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 *
 * @n: The number to start the count from
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int start;

		for (start = n; start >= 98; start--)
		{
			if (start != n)
				printf(" ,");
			printf("%d", start);
		}
	}
	if (n < 98)
	{
		int start;

		for (start = n; start <= 98; start++)
		{
			if (start != n)
				printf(" ,");
			printf("%d", start);
		}
	}
	else if (n == 98)
		printf("%d", n);
	printf("\n");
}
