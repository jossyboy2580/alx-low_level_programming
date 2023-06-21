#include <stdio.h>

/**
 * main - A program that calculates the sum of all
 * evem terms of the fibonacci sequence
 * below 4,000,000
 *
 * Return: always 0(success)
 */

int main(void)
{
	unsigned long first = 1, temp = 0, second, sum = 0;

	second = first + temp;
	while (second <= 4000000)
	{
		if (second % 2 == 0)
			sum += second;
		temp = first;
		first = second;
		second = first + temp;
	}
	printf("%lu\n", sum);
	return (0);
}
