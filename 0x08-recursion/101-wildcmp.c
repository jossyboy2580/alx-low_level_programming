#include "main.h"

/**
 * wildcmp - A function that recursively checks if two strings are
 * the same
 *
 * @s1: The first string
 * @s2: The second string
 * Return: Either 1 or 0 for if similar of different respectively
 */

int wildcmp(char *s1, char *s2)
{
	int wild = 0;

	return (compare_strings(s1, s2, &wild));
}

int compare_strings(char *s1, char *s2, int *wild)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*wild)
	{
		if (*s1 == *s2)
		{
			*wild = 0;
			return (compare_strings(s1++, s2++, wild));
		}
		else if (*s2 == '\0')
		{
			return (1);
		}
		else
		{
			return (compare_strings(s1++, s2, wild));
		}
	}
	else
	{
		if (*s1 != *s2)
		{
			if (*s1 == '\0')
				return (0);
			if (*s2 == '*')
			{
				*wild = 1;
				return (compare_strings(s1++, s2++, wild));
			}
		}
		else
			return (compare_strings(s1++, s2++, wild));
	}
	return (0);
}
