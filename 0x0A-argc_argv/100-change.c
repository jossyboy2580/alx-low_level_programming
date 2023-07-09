#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that accepts an input and print the lowest
 * number of change in cents it can get
 *
 * @argc: Number of arguments passed to the function
 * @argv: Array of arguments
 * Return: 1 or 0
 *
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int val, index;
		int cents[] = {25, 10, 5, 2, 1};

		if (argv[1][0] == '-')
		{
			printf("0\n");
			return (1);
		}
		for (index = 0; argv[1][index] != '\0'; index++)
		{
			if (isdigit(argv[1][index]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[1]);

		while (val > 0)
		{
			while (val >= present)
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
