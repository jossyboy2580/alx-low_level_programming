#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to a program that computes the change
 * in cents for an amount entered by the user
 *
 * @argc: Number of args used to call the program
 * @argv: Array of args used to call the program
 * Return: 0 always true
 *
 */

int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int j = 0;
		int arg_in_digit, current_cent;
		unsigned long int idx = 0;

		while (argv[1][j] != '\0')
		{
			if (argv[1][j] < 48 || argv[1][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		arg_in_digit = atoi(argv[1]);

		while (arg_in_digit > 0 && idx < sizeof(cents) / sizeof(cents[0]))
		{
			current_cent = cents[idx];
			while (arg_in_digit >= current_cent)
			{
				count++;
				arg_in_digit = arg_in_digit - current_cent;
			}
			idx++;
		}
	}
	printf("%d\n", count);
	return (0);
}
