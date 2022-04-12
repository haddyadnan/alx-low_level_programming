#ifndef DOG_GUARDED_H
#define DOG_GUARDED_H

/**
 * struct dog - Create a struct for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
