#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - A funtion that makes a new dog
 *
 * @name: The name of the dog
 * @age: Tbe age of thw dog
 * @owner: The name of the owner of the dog
 * Return; A dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_cpy = name;
	char *owner_cpy = owner;
	dog_t *a_dog;

	a_dog = malloc(sizeof(dog_t));
	if (!a_dog)
		return (NULL);
	a_dog->name = name_cpy;
	a_dog->age = age;
	a_dog->owner = owner_cpy;
	return (a_dog);
}
