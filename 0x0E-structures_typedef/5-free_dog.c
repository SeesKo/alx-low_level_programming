#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to 'dog_t' struct.
 * Return: Void.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
