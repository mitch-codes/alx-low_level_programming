#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid- clear the grid
 *
 * @grid: grid being cleared
 * @height: height of array
 * Return: void or nothing
 */
void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
