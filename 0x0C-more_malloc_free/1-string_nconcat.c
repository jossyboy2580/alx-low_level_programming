#include "main.h"
#include <string.h>

int get_min(int, int);
/**
 * string_nconcat - A program to concatenate n bytes of string2
 * to string1
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of n to concatenate to s1
 * Return: Pointer to new mem area or NUll
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int added = 0, upper_bound;
	unsigned int i = 0;
	char *new_mem;

	upper_bound = get_min(strlen(s2), n);
	new_mem = malloc(sizeof(char) * (strlen(s1) + upper_bound + 1));
	if (!new_mem)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			new_mem[added] = s1[i];
			i++;
			added++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			new_mem[added] = s2[i];
			i++;
			added++;
			if (i == n)
				break;
		}
	}
	return (new_mem);
}

/**
 * get_min - A program to get the minimum of two ints
 * @a: First int
 * @b: Second int
 * Return: loweat of em
 */

int get_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
