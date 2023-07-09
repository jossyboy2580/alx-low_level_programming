#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * is_digit - This function checks if a given argument is a digit
 *
 * @arg: argument to check
 */

int is_digit(char *s)
{
	while (*s != '\0')
	{
		if (isdigit(*s) == 0)
			return (0);
		s++;
	}
	return (1);
}

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
		int cents[] = {25, 10, 5, 2, 1};

		if (argv[1][0] == '-')
		{
			printf("0\n");
			return (0);
		}
		if (is_digit(argv[1]))
		{
			int val;
			int i = 0, count = 0;

			val = atoi(argv[1]);
			while (val > 0)
			{
				int present = cents[i];

				while (val >= present)
				{
					val = val - present;
					count++;
				}
				i++;
			}
			printf("%d\n", count);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
