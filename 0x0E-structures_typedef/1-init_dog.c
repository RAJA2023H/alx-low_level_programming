#include "dog.h"
 
  /**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: input string
 * @age: input float
 * @owner: input string
 * Return: void
 *
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
