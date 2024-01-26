#include <stddef.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: points to a struct dog variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)");
		}
		if (d->age != -1)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{
			printf("Age: (nil)");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
