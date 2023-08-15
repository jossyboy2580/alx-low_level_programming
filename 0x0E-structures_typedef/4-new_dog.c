#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - A funtion that makes a new dog
 *
 * @name: The name of the dog
 * @age: Tbe age of thw dog
 * @owner: The name of the owner of the dog
 * Return: A dog of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	a_dog = malloc(sizeof(dog_t));
	if (!a_dog)
		return (NULL);
	a_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!a_dog->name)
	{
		free(a_dog);
		return (NULL);
	}
	strcpy(a_dog->name, name);
	a_dog->age = age;
	a_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!a_dog->owner)
	{
		free(a_dog->name);
		free(a_dog);
		return (NULL);
	}
	strcpy(a_dog->owner, owner);
	return (a_dog);
}
