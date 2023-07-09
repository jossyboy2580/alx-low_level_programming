#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function to add n variable number of integer args
 *
 * @argc: the number of arguments
 * @argv: Array of string arguments
 * Return: 0 if successful and 1 if not
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		int count;

		for (count = 1; count < argc; count++)
		{
			int i;

			for (i = 0; argv[count][i] != '\0'; i++)
			{
				if (isdigit(argv[count][i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		return (1);
	}

	return (0);
}

