#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - sdfg
 * @d: gfsd
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
