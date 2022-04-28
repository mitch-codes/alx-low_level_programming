#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid- allocate values to 2d array
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer of a pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **s, r, c;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	s = malloc(sizeof(int *) * height);
	if (s == 0)
	{
		return (0);
	}
	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizeof(int) * width);
		if (s[r] == 0)
		{
			for (; r >= 0; r--)
			{
				free(s[r]);
			}
			free(s);
			return (0);
		}
		for (c = 0; c <= width; c++)
		{
			s[r][c] = 0;
		}
	}
	return (s);
}
