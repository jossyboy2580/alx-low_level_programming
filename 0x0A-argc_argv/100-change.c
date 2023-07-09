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
		int val, index = 0;
		int cents[] = {25, 10, 5, 2, 1};

		while (*(*argv[index] != '\0'))
		{
			if (*(*argv[index]) > 57 || *(*argv[index]) < 48)
			{
				printf("\n");
				return (1);
			}
			index++;
		}
		val = atoi(argv[1]);

		while (val > 0)
		{
			while (val >= present
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
