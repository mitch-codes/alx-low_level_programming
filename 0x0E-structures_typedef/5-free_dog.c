#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free memory allocated to dog
 *
 * @d: name of dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d);
	}
}
