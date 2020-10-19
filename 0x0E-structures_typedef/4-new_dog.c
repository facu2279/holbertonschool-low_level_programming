#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 *new_dog - aasdad
 *@name: asdsada
 *@age: adsadas
 *@owner: adsada
 *Return: aadad
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *storename, *storeowner;
	int i, a, b;
	dog_t *d;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	a = _strlen(name);
	b = _strlen(owner);

	storename = malloc(a + 1);
	if (storename == NULL)
	{
		return (NULL);
	}
	storeowner = malloc(b + 1);
	if (storeowner == NULL)
	{
		free(storename);
		return (NULL);
	}

	for (i = 0; i <= a; i++)
		storename[i] = name[i];
	for (i = 0; i <= b; i++)
		storeowner[i] = owner[i];

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(storename);
		free(storeowner);
		return (NULL);
	}

	d->name = storename;
	d->age = age;
	d->owner = storeowner;

	return (d);
}


/**
 * _strlen - fdfdf
 * @s: sksksks
 * Return: sassassass
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
