#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -  a function that creates a new dog
 * @name: points to dog name
 * @age: age of the dog
 * @owner: points to name of the dog owner
 *
 * Return: a pointer to new dog  or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = (dog_t *) malloc(sizeof(dog1));
	if (dog1 == NULL)
	{
		return (NULL);
	}
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
