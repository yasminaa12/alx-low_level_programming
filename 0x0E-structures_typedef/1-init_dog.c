#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to intialize
 * @name: name to initalize
 * @age: age to initalize
 * @owner: owner to intialize
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
