#include <stdlib.h>
#include "main.h"

/**
 * argstostr - A prpgram that concatenates a list of strings
 *
 * @ac: is the argument count
 * @av: is the array of strings
 * Return: A pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int len_all, i, j, new_ind = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			int len_indiv = 0;

			while (av[i][len_indiv] != '\0')
				len_indiv++;
			len_all += len_indiv;
		}
	}
	new = malloc(sizeof(char) * (len_all + (ac * 1)));
	if (!new)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				new[new_ind] = av[i][j];
				new_ind++;
			}
			new[new_ind] = '\n';
			new_ind++;
		}
	}
	new[new_ind] = '\0';
	return (new);
}
