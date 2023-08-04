#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to a program that adds infinite number of
 * integers
 *
 * @argc: Argument count
 * @argv: array of arguments
 * Return: 0 if there are at least one number passed
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		/* Calculate the length of each string
		 * and check each character for a non digit
		 * character */
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
