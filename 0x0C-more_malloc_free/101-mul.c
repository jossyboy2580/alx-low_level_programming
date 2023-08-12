#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * is_digit - A function to chexk if a string is made up of
 * only numbers
 *
 * @str: The string to check
 */

int is_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 57 || str[i] < 48)
			return (0);
	}
	return (1);
}

int *str_to_int_arr_inverse(char *str)
{
	int *new_mem;
	unsigned int len_str;

	len_str = strlen(str);
}
/**
 * main - The entry point of a program that multiplies two numbers
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: prpduct of the two numbers
 */

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	
}
