#include "dog.h"
#include <stdio.h>

/**
 * print_dog - A function to print a dog
 * @d: The dog to be printed
 */

void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (!d)
		return;
	if (!d->name)
		name = "(nil)";
	else
		name = d->name;
	if (!d->owner)
		owner = "(nil)";
	else
		owner = d->owner;
	printf("Name: %s\nAge: %lf\nOwner: %s\n", name, age, owner);
}
