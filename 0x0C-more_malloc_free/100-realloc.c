#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -reallocate memory using malloc
 *
 * @ptr: initial array
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to array
 */
void  *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int j;
	unsigned int i;

	ptr1 = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		((char *)ptr1)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	ptr = malloc(new_size);
	for (j = 0; j < new_size; j++)
	{
		((char *)ptr)[j] = ((char *)ptr1)[j];
	}
	return (ptr);
}
