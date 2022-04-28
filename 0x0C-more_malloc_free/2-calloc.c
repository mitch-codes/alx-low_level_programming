#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory with arguments
 *
 * @nmemb: number of elements
 * @size: data size of each element
 * Return: address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	ptr = malloc(nmemb * size);
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
