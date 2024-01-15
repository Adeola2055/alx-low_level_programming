#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of the array to create
 * @c: an array
 *
 * Return: NULL if size = 0 or a pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		fprintf(stderr, "failed to allocate memory\n");
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c; /* initialized each array with a specific char */
		i++;
	}
	return (ptr);
}
