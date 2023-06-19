#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type dog.
 * @d: pointer to struct dog.
 * @name: name to initialize.
 * @ages: ages to intilaize.
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float ages, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->ages = ages;
	d->owner = owner;
}
