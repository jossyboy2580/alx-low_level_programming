#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to a program that multiplies two numbers
 *
 * @argc: number of cmd args used to call program
 * @argv: array of cmd args used to call program
 * Return: 0 if successful and 1 if not
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
