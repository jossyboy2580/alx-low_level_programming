#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that duplicates a string into the memory
 * space created
 *
 * @str: The string we want to duplicate
 * Return: A pointer to the new string
 */

char *_strdup(char *str)
{
	int len = 0;
	char *new_str;
	int i;

	while (str[len] != '\0')
		len++;
	if (len == 0)
		return (NULL);
	new_str = malloc(sizeof(char) * len);
	if (!new_str)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
