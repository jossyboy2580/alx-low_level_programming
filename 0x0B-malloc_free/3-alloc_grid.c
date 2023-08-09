#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A program that allocates mem for a multi
 * dimensional grid and initialize ot to 0
 *
 * @width: hoe many columns the grid has
 * @height: how many rows it has
 * Return: a null or a pointer to the grid if sucvessful
 */

int **alloc_grid(int width, int height)
{
	int **new_array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	new_array = malloc(sizeof(int *) * height);
	if (!new_array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new_array[i] = malloc(sizeof(int) * width);
		if (!new_array[i])
		{
			free(new_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			new_array[i][j] = 0;
		}
	}

	return (new_array);
}
