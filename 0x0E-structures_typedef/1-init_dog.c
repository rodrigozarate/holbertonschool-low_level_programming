#include "dog.h"
#include <stdio.h>

/**
* init_dog - Function to init var type dog
* @d:pointer
* @name:pointer
* @age:float
* @owner:pointer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* condition */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
