#include "main.h"
/**
 * free_grid- free the array of the alloc_grid function
 * @grid: width of grid
 * @height: height of grid
 * Return: freed grid
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a  < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
