#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_str - A function to reverse the string passed to it
 *
 * @str: The string we want to reverse
 * @len: The length of the string
 */

void rev_str(char *str, int len)
{
	int i = 0;
	char temp;

	for (i = 0; i <= len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - (i + 1)];
		str[len - (i + 1)] = temp;
	}
}

/**
 * infinite_add - A function that adds up the value of two nuumbers stored
 * in two strings
 *
 * @n1: A string holding the first number we want to add
 * @n2: A string holding the second number we want to add
 * @r: A buffer, where the result of the addition
 * will be stored
 * @size_r: The size of the buffer 'r'
 *
 * Return: the pointer to the string r or a string 0 if the operation
 * is not possible
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = strlen(n1);
	int len_n2 = strlen(n2);
	int first_num, second_num;
	int carry = 0, sum;
	int index = 0;

	len_n1--;
	len_n2--;
	while (len_n1 >= 0 || len_n2 >= 0)
	{
		if (len_n1 < 0)
			first_num = 0;
		else
			first_num = n1[len_n1--] - '0';
		if (len_n2 < 0)
			second_num = 0;
		else
			second_num = n2[len_n2--] - '0';
		sum = first_num + second_num + carry;
		if (index + 2 > size_r)
			return (0);
		r[index++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	r[index] = '\0';
	rev_str(r, index);
	return (r);
}
