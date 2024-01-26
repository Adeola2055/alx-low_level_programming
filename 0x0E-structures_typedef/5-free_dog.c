#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
/**
 * free_dog - frees dog
 * @d: points to a struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
