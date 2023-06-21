#include <stdio.h>

/**
 * main - The sum of all multiples of 3 or 5 less than 1024
 *
 * Return: always 0(success)
 */

int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	return (0);
}
