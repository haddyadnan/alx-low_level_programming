#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize variable of type struct
 * @d: pointer to struct dog
 * @name: pointer variable name
 * @age: dog age
 * @owner: dog owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == Null)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
