#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @z: struct dog to free
 */
void free_dog(dog_t *z)
{
	if (z)
	{
		free(z->name);
		free(z->owner);
		free(z);
	}
}
