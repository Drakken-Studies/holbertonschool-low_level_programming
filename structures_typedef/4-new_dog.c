#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - returns a newly allocated copy of a string.
 *
 * @str: string to copy.
 *
 * Return: pointer to copied string, or NULL on failure.
 */
static char *_strdup(char *str)
{
	int i;
	int a;
	char *c;

	i = 0;
	a = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	c = malloc(i + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (a <= i)
	{
		c[a] = str[a];
		a++;
	}
	return (c);
}

/**
 * new_dog - creates a new dog with copied strings.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to new dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	return (my_dog);
}
