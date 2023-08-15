#include <stdlib.h>
#include <ctype.h>
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

/**
 * str_to_int_arr - A function that converts a string made up of
 * integers to an array of integers
 *
 * @str: The string we want to convert
 * @len: The length of the string
 * Return: An array of integers if the operation is successful
 * and NULL if not
 */

int *str_to_int_arr(char *str, int len)
{
	int *num_array;
	int i;

	num_array = malloc(sizeof(int) * len);
	if (!num_array)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		num_array[i] = '0' - str[i];
	}
	return (num_array);
}

void rev_array(int *arr)
{
	unsigned int i, len;
	int temp;

	if (arr)
	{
		len = sizeof(arr) / sizeof(int);

		for (i = 0; i < len / 2; i++)
		{
			temp = arr[i];
			arr[len - i - 1] = arr[i];
			arr[i] = temp;
		}
	}
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
	int *first_arr;
	int *second_arr;
	int i;

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
	first_arr = str_to_int_arr(argv[1], strlen(argv[1]));
	second_arr = str_to_int_arr(argv[2], strlen(argv[2]));
	printf("Array 1\n");
	printf("--------------------------\n");
	for (i = 0; i < strlen(argv[1]); i++)
		printf("%d", first_arr[i]);
	printf("\n\n-------------++++++++--------------\n\n");
}
