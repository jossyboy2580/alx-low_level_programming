#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new structure called dog
 * @name: The name of the dog
 * @age: How old is the dog
 * @owner: Who owns the dog
 *
 * Description: A new struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
