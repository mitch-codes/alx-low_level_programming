#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*typedef unsigned int size_t;*/

/**
 * array_iterator - manipulate arrays function pointer
 *
 * @array: array address
 * @size: array size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != 0 && size != 0 && action != 0)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
