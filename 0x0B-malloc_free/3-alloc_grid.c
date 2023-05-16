#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **see;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	see = malloc(sizeof(int *) * height);

	if (see == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		see[a] = malloc(sizeof(int) * width);

		if (see[a] == NULL)
		{
			for (; a >= 0; a--)
				free(see[a]);

			free(see);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			see[a][b] = 0;
	}

	return (see);
}
