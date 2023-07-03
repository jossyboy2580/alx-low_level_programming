#include "main.h"

int is_substring(char *, char *);
/**
 * _strstr - Find thw substring needle in the string
 * haystack
 *
 * @haystack: Where we'll search the neddle from
 * @needle: The substring we will searxh for
 * Return: The pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			if (is_substring((haystack + i), needle))
				return ((haystack + i));
		}
		i++;
	}
	return (NULL);
}

/**
 * is_substring - a function to check if a given string is
 * a substring of another
 *
 * @haystack_node: A point on haystack to start search from
 * @needle: needle to search in haystack
 * Return: 1 if needle is found and 0 if otherwise
 */

int is_substring(char *haystack_node, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (needle[i] !=  haystack_node[i])
			return (0);
	}
	return (1);
}
