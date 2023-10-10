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

	/* Initializing details of the new dog */
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
