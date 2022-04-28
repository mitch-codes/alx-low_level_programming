#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked -check to see if memory is allocated
 *
 * @b: memory alocation size
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
