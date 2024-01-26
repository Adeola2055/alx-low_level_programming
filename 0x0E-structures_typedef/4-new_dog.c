#include <stddef.h>
#include <string.h>
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
	dog_t *dog;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	dog->owner = strdup(owner);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
