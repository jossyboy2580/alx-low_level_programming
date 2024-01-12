#include "main.h"
#include <stdio.h>

int compare_strings(char *s1, char *s2, int *wild, int *tilt);

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
	int tilt = 0;

	return (compare_strings(s1, s2, &wild, &tilt));
}

/**
 * compare_strings - A function that compares to strings recursively
 *
 * @s1: The first string
 * @s2: The second string
 * @wild: Pointer to an int flag to signal when a wild
 * flag character has been encountered
 * @tilt: Pointer to an int flag to decide if we should
 * move forward or backward
 * Return: either 1 or 0 for similar or disimilar respectively
 */

int compare_strings(char *s1, char *s2, int *wild, int *tilt)
{
	if (*tilt == -1)
	{
		if (*s1 == '\0')
		{
			*tilt = 1;
			return (compare_strings(s1 - 1, s2, wild, tilt));
		}
		else
			return (compare_strings(s1 + 1, s2, wild, tilt));
	}
	else if (*tilt == 1)
	{
		if (*s1 == *s2)
		{
			*tilt = 0;
			*wild = 0;
			return (compare_strings(s1 + 1, s2 + 1, wild, tilt));
		}
		else
			return (compare_strings(s1 - 1, s2, wild, tilt));
	}
	else
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		if (*s2 == '*')
		{
			if (!(*wild))
				*wild = 1;
			return (compare_strings(s1, s2 + 1, wild, tilt));
		}
		else
		{
			if (*s2 == '\0')
				return (1);
			else if (*s1 == *s2)
			{
				return (compare_strings(s1 + 1, s2 + 1, wild, tilt));
			}
			else
			{
				if (*wild)
				{
					*tilt = -1;
					return (compare_strings(s1 + 1, s2, wild, tilt));
				}
				else
					return (0);
			}
		}
	}
}
