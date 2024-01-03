#include "main.h" 

/**
 * _atoi - A function to try out an alternative technique for converting a string to an
 * integer
 *
 * @s: The string that contains the set of numbers we want to convert to an integer
 * Return: An integer representation of the string
 */

int _atoi(char *s)
{
	int len = 0;
	int seen_space = 0;
	int result = 0;
	int multiplier = 1;

	/* Get the length of the string */
	while (s[len] != '\0')
		len++;
	/* Reduce the length by one to enable us index the last element */
	len--;

	/* Start looping from the back and add up numbers to the result*/
	while (len > -1)
	{
		if (s[len] == '-')
		{
			result *= -1;
		}
		else if (s[len] >= 48 && s[len] <= 57)
		{
			if (seen_space)
			{
				result = 0;
				multiplier = 1;
				result = result + ((s[len] - '0') * multiplier);
				multiplier *= 10;
				seen_space = 0;
			}
			else
			{
				result = result + ((s[len] - '0') * multiplier);
				multiplier *= 10;
			}
		}
		else
		{
			if (!seen_space)
				seen_space = 1;
		}
		len--;
	}
	return (result);
}
