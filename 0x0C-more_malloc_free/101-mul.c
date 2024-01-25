#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * make_and_prefill_mem = This function allocates memory for storing
 * integer characters and prefils them with zeroes
 *
 * @height: The height of the present iteration
 * @len: The length of the string
 * Return: A pointer to a memory space
 */

char *make_and_prefill_mem(int height, unsigned int len)
{
	char *mem;
	int i = 0;

	mem = malloc(sizeof(char) * (height + len + 2));
	if (!mem)
		return (NULL);
	while (i < height)
	{
		mem[i] = '0';
		i++;
	}
	return (mem);
}

char *add_prod_vec(char **prod_vec)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int len = 0;
	char *sum_result;
	int sum = 0, carry = 0;

	while (prod_vec[i] != NULL)
	{
		if (strlen(prod_vec[i]) > len)
			len = strlen(prod_vec[i]);
		i++;
	}
	i = 0;
	sum_result = malloc(sizeof(char) * (len + 2));
	if (!sum_result)
		return (NULL);
	for (j = 0; j < len; j++)
	{
		sum = 0;
		i = 0;
		while (prod_vec[i] != NULL)
		{
			if (strlen(prod_vec[i]) > j)
			{
				sum += prod_vec[i][j] - '0';
			}
			i++;
		}
		sum += carry;
		sum_result[j] = (sum % 10) + '0';
		carry = sum / 10;
	}
	/*
	if (carry >= 1)
		sum_result[j++] = carry + '0';
	*/
	sum_result[j] = '\0';
	return (sum_result);
}

/**
 * mul_result - A function that multiplies two numbers and returns an array
 * containing the quotient, remainder
 *
 * @a: The first number we want to multiply
 * @b: The second number we want to multiply
 * @carry: The carry that will be added to the product
 *
 * Return: An array containing the quotient and the remainder
 */

char *mul_result(int a, int b, int carry)
{
	char *result_arr;
	int product;

	result_arr = malloc(sizeof(char) * 2);
	if (!result_arr)
		return (NULL);
	product = (a * b) + carry;
	result_arr[0] = (product % 10) + '0';
	result_arr[1] = (product / 10) + '0';
	return (result_arr);
}

/**
 * is_digit - A function to check if a character is a digit
 *
 * @c: The character we want to check
 * Return: Either 1 if it is a character or 0 if not
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * rev_string - A string reversing function
 *
 * @s: The string we want to reverse
 */

void rev_string(char *s)
{
	int len = 0, i, half;
	char temp;

	while (s[len] != '\0')
		len++;

	half = len / 2;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	for (i = 0; i < half; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - (i + 1)));
		*(s + (len - (i + 1))) = temp;
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
	int i, j, k;
	int pos;
	char *str1, *str2;
	char carry = '0';
	char *product;
	char *result;
	char *product_string = NULL;
	char **prods_vec = NULL;
	int remainder = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	str1 = argv[1];
	str2 = argv[2];
	rev_string(str1);
	rev_string(str2);
	prods_vec = malloc(sizeof(char *) * (strlen(str1) + 1));
	if (!prods_vec)
	{
		printf("Malloc of Product height failed!\n");
		exit (98);
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (!is_digit(str1[i]))
		{
			printf("Error\n");
			exit(98);
		}
		product_string = make_and_prefill_mem(i, strlen(str2));
		if (!product_string)
		{
			printf("Malloc of Product string failed!\n");
		/*	free_vec(prods_vec, i); */
			exit(98);
		}
		pos = i;
		j = 0;
		carry = '0';
		while (str2[j] != '\0')
		{
			if (!is_digit(str2[j]))
			{
				printf("Error\n");
		/*		free_vec(prods_vec, i); */
				exit(98);
			}
			product = mul_result(str1[i] - '0', str2[j] - '0', carry - '0');
			carry = product[1];
			remainder = product[0];
			free(product);
			product_string[pos] = remainder;
			product_string[pos + 1] = carry;
			j++;
			pos++;
		}
		product_string[pos + 2] = '\0';
		for (k = 0; product_string[k] != '\0'; k++)
		prods_vec[i] = product_string;
		i++;
	}
	prods_vec[i] = NULL;
	for (i = 0; prods_vec[i] != NULL; i++)
	{
	}
	result = add_prod_vec(prods_vec);
	rev_string(result);
	printf("%s\n", result);
	return (0);
}
