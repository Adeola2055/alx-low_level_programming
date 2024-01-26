#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: points to an array that contains the dog name
 * @age: points to an array that contains the dog age
 * @owner: points to an array that contains the dog oner name
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
