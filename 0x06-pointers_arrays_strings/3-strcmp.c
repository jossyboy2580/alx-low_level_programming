#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * lexicographically
 *
 * @s1: First string
 * @s2: Second string
 * Return: integer
 * -1 if s2 is longer than s1
 * 1 if s1 is longer than s2
 * 0 if they are equal
 * and the difference in the ascii val if two
 * compared strings are unequal.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ascii_difference;

	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (1);
		ascii_difference = s1[i] - s2[i];
		if (ascii_difference != 0)
		       return (ascii_difference);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	return (0);
}
