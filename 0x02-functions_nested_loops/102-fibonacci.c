#include <stdio.h>

/**
 * main - Entry point of a program that prints the first
 * fifty fibonacci numbers
 *
 * Return: always 0(success)
 */

int main(void)
{
	int first = 1, second, count, temp = 0;

	for (count = 0; count < 50; count++)
	{
		second = temp + first;
		temp = first;
		first = second;
		printf("%d", second);
		if (count != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
