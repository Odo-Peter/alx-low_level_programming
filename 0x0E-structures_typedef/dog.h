#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
struct Dog
{
	char *name;
	float age;
	char *owner;
};

struct Dog *new_dog(char *name, float age, char *owner)
{
	struct Dog *my_dog;

	my_dog = malloc(sizeof(struct Dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}

#endif
