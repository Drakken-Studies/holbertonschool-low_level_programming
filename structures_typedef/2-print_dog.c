#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function to print struct dog and its elements.
 *
 * @d: pointer to struct dog.
 *
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
