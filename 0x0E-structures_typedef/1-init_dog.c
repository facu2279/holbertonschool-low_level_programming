#include "dog.h"
/**
 * init_dog - asdf
 * @d: sdf
 * @name: asdf
 * @age: sdf
 * @owner: sdf
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
