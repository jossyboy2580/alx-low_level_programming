#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

char *make_str(char *str, int start, int end)
{
	int len = end - start;
	char *result;
	int i;

	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < len; i++)
		{
			result[i] = str[start++];
		}
		result[i] = '\0';
	}
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
	char **str_arr = NULL;
	char *new;
	int count = 0;
	int lenstr = strlen(str);
	int start_n;
	int char_found = 0;
	int moving_node = 0;

	if (str == NULL || lenstr == 0)
		return (NULL);
	printf("%d\n", lenstr);
	while (moving_node <= lenstr)
	{
		printf("In while loop\n");
		if (_isspace(str[moving_node]) || str[moving_node] == '\0')
		{
			printf("In if check for space\n");
			if (char_found)
			{
				str_arr = realloc(str_arr, sizeof(char *) * ++count);
				if (str_arr == NULL)
					return (NULL);
				else
				{
					new = make_str(str, start_n, moving_node);
					if (new == NULL)
						return (NULL);
					str_arr[count - 1] = new;
				}
				char_found = 0;
			}
		}
		else
		{
			if (char_found)
				continue;
			else
			{
				start_n = moving_node;
				char_found = 1;
			}
		}
		moving_node++;
	}
	free(new);
	str_arr[count] = NULL;
	return (str_arr);
}
