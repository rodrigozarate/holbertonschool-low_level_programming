#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Make a dog
 * @name: Self explanatory
 * @age: Self explanatory
 * @owner: Self explanatory
 *
 * Description: Create a dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
