#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @names: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *names, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->names = names;
	d->age = age;
	d->owner = owner;
}

