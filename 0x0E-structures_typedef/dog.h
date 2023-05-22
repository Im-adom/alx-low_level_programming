#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Provides the basic info of a poppy.
 * @name: First input
 * @age: Second input
 * @owner: Third input
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
