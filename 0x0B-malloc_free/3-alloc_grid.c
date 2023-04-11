#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: The input of width.
 * @height: The input of height.
 * Return: The pointer to 2 dim. array.
 */

int **alloc_grid(int width, int height)
{
	int **bee;
	int j, k;

	if (width <= 0 || height <= 0)
	return (NULL);
	bee = malloc(sizeof(int *) * height);
	if (bee == NULL)
	return (NULL);
	for (j = 0; j < height; j++)
	{
		bee[j] = malloc(sizeof(int) * width);
		if (bee[j] == NULL)
		{
			for (; j >= 0; j--)
			free(bee[j]);
			free(bee);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		bee[j][k] = 0;
	}
	return (bee);
}

