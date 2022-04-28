#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef unsigned int size_t;*/

/**
 * int_index - finds array position that matches a description
 *
 * @array: array address
 * @size: array size
 * @cmp: function pointer
 * Return: array position
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != 0 && size != 0 && cmp != 0)
	{
	int i;
	int temp;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		temp = cmp(array[i]);
		if (temp != 0)
		{
			return (i);
		}
	}
	}
	return (-1);
}
