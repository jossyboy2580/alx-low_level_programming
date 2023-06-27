#include "main.h"

/**
 * _atoi - Function to convert the string to an integer
 *
 * @s: the string to convert
 * Return: 1 if successful, 0 if otherwise
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Skip leading white space */
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;

	/* Handle optional sign */
	while (s[i] == '+' || s[i] == '-')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	/* Convert digits to integer values */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
