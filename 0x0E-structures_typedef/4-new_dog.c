#include <stdio.h>
#include "dog.h"
/**
 * new_dog - asdfa
 * @name: asdf
 * @age: sdfa
 * @owner: sdf
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
	return (my_dog);
}
