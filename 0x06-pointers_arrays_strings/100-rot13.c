#include "main.h"

/**
 * rot13 - A function that implements the rot13 encryption
 * algorithm
 *
 * @s: The string we want to reverse
 * Return: A pointer to the rotated string
 */

char *rot13(char *s)
{
	int i = 0, normalized_value;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >=97)
		{
			normalized_value = (s[i] - 97) % 26;
			s[i] = normalized_value + 97;
		}
		else if (s[i] <= 90 && s[i] >= 65)
		{
			normalized_value = (s[i] - 65) % 26;
			s[i] = normalized_value + 65;
		}
		i++;
	}
	return (s);
}
