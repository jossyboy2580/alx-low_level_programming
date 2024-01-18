#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isspace - Function to check if a character is a space char
 * either tab, empty space, vertical tab, carriage return or
 * a newline character
 *
 * @c: The character we want to check
 * Return: return value is 1 if it is a space character
 * and 0 if it is not
 */

int _isspace(char c)
{
	if (c == ' ' ||
			c == '\r' ||
			c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f')
		return (1);
	else
		return (0);
}

/**
 * make_str - A function that allocates memory for a string and fills it up
 * with characters from a given string
 *
 * @str: The string we want to select the chars from
 * @start: index on str where our first char will come from and start from
 * @end: index of the last char in str to fill into new string
 *
 * Return: The newly malloced string
 */

char *make_str(char *str, int start, int end)
{
	int len = end - start;
	char *result;
	int i;

	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		result[i] = str[start++];
	}
	result[i] = '\0';
	return (result);
}

/**
 * strtow - A function that splits a string into array of individual words
 * it splits them accress spaces
 *
 * @str: The string we want to split into array of words
 * Return: On success an array of strings should be retured
 * on failure, NULL should be retured
 */

char **strtow(char *str)
{
	int i;
	int str_len = strlen(str);
	int char_found = 0;
	int start;
	int count = 0;
	char **str_arr = NULL;
	char *new = NULL;

	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == '\0' || _isspace(str[i]))
		{
			if (char_found)
			{
				new = make_str(str, start, i);
				str_arr = realloc(str_arr, ++count);
				if (str_arr == NULL)
				{
					free(new);
					return (NULL);
				}
				str_arr[count - 1] = new;
				char_found = 0;
			}
		}
		else
		{
			if (!char_found)
			{
				start = i;
				char_found = 1;
			}
		}
	}
	str_arr[count] = NULL;
	return (str_arr);
}
