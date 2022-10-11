#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog of type dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(name) + sizeof(age) + sizeof(owner));

	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
