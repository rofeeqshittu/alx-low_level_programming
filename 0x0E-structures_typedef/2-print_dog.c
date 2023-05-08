#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: dog structure d
 *
 * Return: printed result
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL || d->age < 0 || d->owner == NULL)
		printf("nil\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
