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
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: ");
		if (d->age != 0)
			printf("%f\n", d->age);
		else
			printf("(nil)");
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
