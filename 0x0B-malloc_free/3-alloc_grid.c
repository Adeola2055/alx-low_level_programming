#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: number of index of columns of the 2D array
 * @height: number of index 0f rows of the 2D array
 *
 * Return: NUll on failure or pointer to a 2D array on success
 */
int **alloc_grid(int width, int height)
{
	int row = 0, col;
	int **grid; /* pointer to 2D array of integers */

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* allocate memory for rows */
	grid = (int **) malloc(height * sizeof(int *));
	/* check if allocation is successful */
	if (grid == NULL)
	{
		return (NULL);
	}
	/* allocate memory for colums in each row */
	while (row < height)
	{
		grid[row] = (int *) malloc(width * sizeof(int));
		/* check if allocation is successful */
		if (grid[row] == NULL)
		{
			col = 0;
			while (col < row)
			{
				free(grid[col]);/* free grid if e can't allocate more memory */
				col++;
			}
			free(grid);
			return (NULL);
		}
		/* initialize each number in the grid to 0 */
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}
