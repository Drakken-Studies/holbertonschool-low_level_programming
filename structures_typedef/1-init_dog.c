#include "main.h"
#include "dog.h"

/**
 * init_dog - initializes the variables within struct dog.
 *
 * @name: details to initialise struct dog.
 * @age: details to initialise struct dog.
 * @owner: details to initialse struct dog.
 * @d: pointer to struct dog.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
