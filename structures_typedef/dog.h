#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog description.
 *
 * @name: details of struct dog.
 * @age: details of struct dog.
 * @owner: details of struct dog.
 *
 * init_dog - function that initialize a variable of type struct dog
 *
 * print_dog - function that prints a struct dog.
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
