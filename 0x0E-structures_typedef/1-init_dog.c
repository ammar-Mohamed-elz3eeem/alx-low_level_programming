#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init a new variable of type struct dog with the given data
 * @d: pointer of struct of type dog
 * @name: name of the dog to be inserted on the dog var
 * @age: age of the dog to be inserted on the dog var
 * @owner: owner of the dog to be inserted on the dog var
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
