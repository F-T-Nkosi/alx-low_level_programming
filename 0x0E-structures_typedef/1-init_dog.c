#include<stdlib.h>
#include "main.h"

/**
 * init_dog - initializes the variable struct dog
 * @d: pointer to struct dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
