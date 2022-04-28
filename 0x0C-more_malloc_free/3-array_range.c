#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range -create an array of integers
 *
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int num;
	int j = 0;
	int i;

	if (min > max)
	{
		return (0);
	}
	num = (max - min) + 1;
	ptr = malloc(num * sizeof(int));
	if (ptr == 0)
	{
		return (0);
	}
	for (i = min; i <= max; i++)
	{
		*(ptr + j) = i;
		j++;
	}
	return (ptr);
}
