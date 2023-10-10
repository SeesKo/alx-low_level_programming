#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to char array containing dog's name.
 * @age: Dog's age.
 * @owner: Pointer to array containing dog owner's name.
 * Return: Pointer to newly created dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Memory allocation for new dog */
	dog_t *new_dog = malloc(sizeof(dog_t));

	/* Check if memory allocation was successful */
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory and copy the name string */
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Copy the age */
	new_dog->age = age;

	/* Allocate memory for the owner string and copy it */
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
