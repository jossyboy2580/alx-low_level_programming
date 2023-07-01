#include "main.h"

/**
 * leet - A function to get the leet version of any message
 *
 * @s: The string whose leetcode we seek
 * Return: Pointer to a string
 */

char *leet(char *s)
{
	int i = 0;
	char *leet_map = "l1L1a4A4e3E3t7T7o0O0";

	while (leet_map[i] != '\0')
	{
		int j = 0;

		while (s[j] != '\0')
		{
			if (s[j] == leet_map[i])
			{
				s[j] = leet_map[i + 1];
			}
			j++;
		}
		i = i + 2;;
	}
	return (s);
}
