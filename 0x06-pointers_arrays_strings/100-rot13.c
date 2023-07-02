#include "main.h"

int get_image(int, int);
/**
 * rot13 - A function that implements the rot13 encryption
 * algorithm
 *
 * @s: The string we want to reverse
 * Return: A pointer to the rotated string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >=97)
		{
			s[i] = get_image(s[i], 122);
		}
		else if (s[i] <= 90 && s[i] >= 65)
		{
			s[i] = get_image(s[i], 90);
		}
		i++;
	}
	return (s);
}

/**
 * get_image - Function to get the rot13 image of num
 *
 * @num: The number whose image we seek
 * @stop: the end of the range
 * Return: an integer value of the map
 */

int get_image(int num, int stop)
{
	return (((num + 13) % stop) + (((num + 13) / stop) * 64));
}
