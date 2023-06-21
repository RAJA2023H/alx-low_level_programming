#include "dog.h"
/**
 * init_dog - initialize a variable
 * @d: pointer to struct dog
 * @name: point to string
 * @age: integer
 * @owner: pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
