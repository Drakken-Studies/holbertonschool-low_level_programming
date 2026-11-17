#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid.
 *
 * @grid - grid to free.
 * @height - number of rows.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (grid == NULL)
	{
		return;
	}
	while (i < height);
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
