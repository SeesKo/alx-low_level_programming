#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Array width.
 * @height: Array height.
 * Return: Pointer to 2D array; NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	/* Check if width or height are 0 or negative */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of pointers to rows */
	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Allocate memory for each individual row */
		arr[i] = (int *)malloc(width * sizeof(int));

		/* Check if memory allocation for a row was successful */
		if (arr[i] == NULL)
		{
			/* Free memory allocated to rows */
			for (j = 0; j < i; j++)
				free(arr[j]);

			/* Free memory allocated to the arrays of pointers to rows */
			free(arr);
			return (NULL);
		}

		/* Initialize each element in the current row to 0 */
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
