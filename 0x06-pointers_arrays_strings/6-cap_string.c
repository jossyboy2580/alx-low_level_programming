#include "main.h"

int is_separator(char c);
/**
 * cap_string - Capitalize every word in the string
 *
 * @s: The string to capitalize
 * Return: pointer to the capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (is_separator(s[i]))
		{
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
				s[i + 1] = s[i + 1] - 32;
		}
		else if (i == 0 && s[i] <= 122 && s[i] >= 97)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

/**
 * is_separator - A functiom to check if given character
 * is a separator
 *
 * @c: The character to check
 * Return: 1 if its a separator and 0 if it is not
 */

int is_separator(char c)
{
	char *separators = ",; .!\t?\"()\n}{";
	int i;

	for (i = 0; i < 11; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}
