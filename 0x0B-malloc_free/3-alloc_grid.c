#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A program that allocates mem for a multi
 * dimensional grid and initialize ot to 0
 *
 * @width: hoe many columns the grid has
 * @heigth: how many rows it has
 * Return: a null or a pointer to the grid if sucvessful
 */

int **alloc_grid(int width, int height)
{
	int **new_array;
	int i;

	if (width == 0 || height == 0)
		return (NULL);
	new_array = malloc(sizeof(int) * width * height);
	if (!new_array)
		return (NULL);
	for (i = 0; i < width * height; i++)
	{
		new_array[i] = 0;
	}
	return (new_array);
}
