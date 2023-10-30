#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a 2d array and return pointer
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success) or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int j;
	int k;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		arr[j] = (int *) malloc(sizeof(int) * width);
		if (arr[j] == NULL)
		{
			free(arr);
			for (k = 0; k <= j; k++)
				free(arr[k]);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			arr[j][k] = 0;
	}
	return (arr);
}
