#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width:the width of the 2 dimensional array
 *@height:the height of the array
 *Return:apointer to a 2 dimensional array of antegers ,elements are set to 0
 *
 *
 */
int	**alloc_grid(int width, int height)
{
	int i = 0;
	int **matrix;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	matrix = (int **)malloc(sizeof(int *) * width);
	if (matrix == NULL)
	{
		return (NULL);
	}
	while (i < width)
	{
		matrix[i] = (int *)malloc(sizeof(int) * height);
		if (matrix[i] == NULL)
		{
			while (i >= 0)
			{
				free(matrix[i]);
				i--;
			}
			free(matrix);
			return (NULL);
		}
		i++;
	}
	initialize(matrix, width, height);
	return (matrix);
}
/**
 *initialize - initialize a 2d array of integers with 0
 *@m:a pointer to the array
 *@w:the wedith
 *@h:the height
 *
 */
void	initialize(int **m, int w, int h)
{
	int i = 0, j = 0;

	while (i < w)
	{
		j = 0;
		while (j < h)
		{
			m[i][j] = 0;
			j++;
		}
		i++;
	}
}
