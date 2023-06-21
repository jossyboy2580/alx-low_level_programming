#include <stdio.h>

/**
 * main - Entry point of a program that prints the first
 * ninety eight terms fibonacci numbers
 *
 * Return: always 0(success)
 */

int main(void)
{
	unsigned long first = 1, second, temp = 0;
	int count;

	for (count = 0; count < 98; count++)
	{
		second = temp + first;
		temp = first;
		first = second;
		printf("%lu", second);
		if (count != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
