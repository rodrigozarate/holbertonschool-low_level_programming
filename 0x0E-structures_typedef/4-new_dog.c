/*
* 4-new_dog.c - Create a new dog
* Author: Rodrigo Zárate Algecira
* Date: 19, July 2021
*/

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
* new_dog - function to create and copy a dog
* @name: char
* @age: float
* @owner: char
* Return: NULL if fails or NewDog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0;
char *copyName, *copyOwner;
dog_t *p_New_Woof = malloc(sizeof(dog_t));

if (p_New_Woof == NULL)
return (NULL);
/* walk strings */
for (; name[i]; i++)
;
for (; owner[j]; j++)
;
copyName = malloc(sizeof(char) * (i + 1));
	if (copyName == NULL)
	{
		free(p_New_Woof);
		return (NULL);
	}
copyOwner = malloc(sizeof(char) * (j + 1));
	if (copyOwner == NULL)
	{
		free(copyName);
		free(p_New_Woof);
		return (NULL);
	}
for (i = 0; name[i]; i++)
	copyName[i] = name[i];
copyName[i] = '\0';
for (i = 0; owner[i]; i++)
	copyOwner[i] = owner[i];
copyName[i] = '\0';
p_New_Woof->name = copyName;
p_New_Woof->age = age;
p_New_Woof->owner = copyName;
return (p_New_Woof);
}
