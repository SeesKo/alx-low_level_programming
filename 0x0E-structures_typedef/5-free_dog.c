#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs.
 * @d: Pointer to 'dog_t' struct.
 * Return: Void.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free memory for strings containing */
		/* dog's name and owner */
		free(d->name);
		free(d->owner);

		/* Free memory for 'dog_t' struct */
		free(d);
	}
}
