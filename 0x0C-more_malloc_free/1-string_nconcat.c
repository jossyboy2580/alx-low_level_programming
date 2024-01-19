#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A program to concatenate n bytes of string2
 * to string1
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes of n to concatenate to s1
 * Return: Pointer to new mem area or NUll
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int added = 0;
	unsigned int i = 0;
	char *new_mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	new_mem = malloc(sizeof(char) * (strlen(s1) + 1));
	if (!new_mem)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_mem[added] = s1[i];
		i++;
		added++;
	}
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		new_mem = realloc(new_mem, sizeof(char) * (added + 1));
		if (!new_mem)
			return (NULL);
		new_mem[added] = s2[i];
		i++;
		added++;
	}
	new_mem[added] = '\0';
	return (new_mem);
}
