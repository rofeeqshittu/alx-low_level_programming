#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	new_dog->name = malloc(sizeof(char) * (i + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		;
	new_dog->owner = malloc(sizeof(char) * (i + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
