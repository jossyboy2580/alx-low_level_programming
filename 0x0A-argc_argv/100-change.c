#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_digit(char *);
/**
 *  * main - Entry point to a program that computes the change
 *   * in cents for an amount entered by the user
 *    *
 *     * @argc: Number of args used to call the program
 *      * @argv: Array of args used to call the program
 *       * Return: 0 always true
 *        *
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
		int arg_in_digit, current_cent;
		unsigned long int idx = 0;

		if (is_digit(argv[1]))
		{
			arg_in_digit = atoi(argv[1]);

			while (arg_in_digit > 0)
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
	}
	printf("%d\n", count);
	return (0);
}

/**
 * is_digit - An implementation of isdigit from the ctype
 * library
 *
 * @num: a string we want to check
 * Return: 1 if its a digit and 0 if its not
 */

int is_digit(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
