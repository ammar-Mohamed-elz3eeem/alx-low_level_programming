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

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->name = _strcpy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcpy(ndog->owner, owner);

	return (ndog);
}

/**
 * _strcpy - copy from src string to dest string
 * @dest: string to copy to
 * @src: string to copy from
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	return dest;
}

/**
 * _strlen - get string length
 * @src: string to get its length
 * Return: the length of string
 */

unsigned int _strlen(char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		;

	return i;
}