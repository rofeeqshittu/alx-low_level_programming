#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dogs.
 * @d: The dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
