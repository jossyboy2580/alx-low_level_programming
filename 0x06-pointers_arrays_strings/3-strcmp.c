#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * lexicographically
 *
 * @s1: First string
 * @s2: Second string
 * Return: integer
 * 1 if s2 is greater than s1
 * -1 if s1 is greater than s2
 *  0 if they are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s2[i] == '\0' || s2[i] < s1[i])
			return (15);
	}
	if (s2[i] != '\0')
		return (-15);
	return (0);
}
