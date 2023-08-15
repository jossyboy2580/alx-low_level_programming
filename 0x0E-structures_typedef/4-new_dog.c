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
	char *name_cpy;
	char *owner_cpy;
	dog_t *a_dog;
	int i;

	name_cpy = malloc(sizeof(char) * strlen(name));
	if (name_cpy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_cpy[i] = name[i];
	name_cpy[strlen(name)] = '\0';
	owner_cpy = malloc(sizeof(char) * strlen(owner));
	if (owner_cpy == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[strlen(owner)] = '\0';
	a_dog = malloc(sizeof(dog_t));
	if (!a_dog)
		return (NULL);
	a_dog->name = name_cpy;
	a_dog->age = age;
	a_dog->owner = owner_cpy;
	return (a_dog);
}
