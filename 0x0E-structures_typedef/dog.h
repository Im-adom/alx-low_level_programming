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

/*dog_t - typedef for struct do */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
