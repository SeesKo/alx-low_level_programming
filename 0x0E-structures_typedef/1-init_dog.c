#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog.
 * @name: Pointer to char array containing dog's name.
 * @age: Dog's age.
 * @owner: Pointer to array containing dog owner's name.
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
