#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a struct of type dog_t
 * @d: dog struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}