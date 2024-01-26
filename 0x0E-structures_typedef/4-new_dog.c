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

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc (sizeof(char) * strlen(name) + 1);
	dog->owner = malloc (sizeof(char) * strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}
