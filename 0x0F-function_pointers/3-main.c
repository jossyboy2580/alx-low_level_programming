#include "3-calc.h"

/**
 * main - The entry point of the program
 *
 * @argc: Number of arguments in the program
 * @argv: Array of arguments passed to the program
 * Return: 0 always successful
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (strlen(argv[2]) != 1 || argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (op(a, b));
}
