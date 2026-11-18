#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @name: details to initialise struct dog.
 * @age: details to initialise struct dog.
 * @owner: details to initialse struct dog.
 * @d: pointer to struct dog.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
