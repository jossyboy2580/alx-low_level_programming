#include "main.h"

/**
 * wildcmp - Compare two strings recuraively
 *
 * @s1: First string
 * @s2: Second string
 * Return: 1 if it is similar and 0 if its is not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2));
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
