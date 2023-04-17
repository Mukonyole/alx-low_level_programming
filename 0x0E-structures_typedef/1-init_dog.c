#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes dog structure.
* @d: The dog structure.
* @name: The name to initialize.
* @age: The age to initialize.
* @owner:The owner to initialize.
* Return: Always 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
