#include "dog.h"

/**
 * init_dog - A functiin that initialozes the dog type
 *
 * @d: A pointer to the dog memory
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
