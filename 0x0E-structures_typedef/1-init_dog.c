#include <stddef.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: points to a struct dog variable
 * @name: first member
 * @age: second member
 * @owner: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
