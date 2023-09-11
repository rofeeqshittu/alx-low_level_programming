#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Dog name
 * @age: Dog Age
 * @owner: Dog owner
 *
 * Return: Dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog = malloc(sizeof(dog_t));

	if (new_Dog == NULL)
		return (NULL);

	new_Dog->name = name;
	new_Dog->age = age;
	new_Dog->owner = owner;

	return (new_Dog);
}
