#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: the struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != 0)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
	return (new_dog);

}
