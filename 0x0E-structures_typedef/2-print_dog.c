#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog information
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if ((*d).name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");

		printf("Age: ");
		if ((*d).age != 0.0f)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");

		printf("Owner: ");
		if ((*d).owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
