/*
* 5-free_dog.c - Like Willy but with dogs
* Author: Rodrigo Zárate Algecira
* Date: 19, July 2021
*/

#include <stdlib.h>
#include "dog.h"

/**
* free_dog - The dog will run
* @d: pointer
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
