/*
* 2-print_dog.c - Print struct dog
* Author: Rodrigo Zárate Algecira
* Date: 19, July 2021
*/

#include <stdio.h>
#inlcude "dog.h"

/**
* print_dog - Print the dog
* @d: Struct dog
* Return: Null or dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age != NULL)
	{
		printf("Age: %.6f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
