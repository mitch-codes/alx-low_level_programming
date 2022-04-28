#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Assign values to struct content
 *
 * @d: the object name of the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
