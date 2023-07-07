#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to a program that prints the product of
 * two numbers
 *
 * @argc: The number of arguments that this program receives
 * @argv: An array of arguments in strings
 * Return: 1 if its a sucvess and 0 if not
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int product = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
