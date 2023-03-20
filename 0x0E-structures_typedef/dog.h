#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure for a dog
 * @name: the dog's name
 * @age: the age of the dog in floats
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
