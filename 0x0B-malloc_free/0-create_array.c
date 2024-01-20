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
	unsigned int index = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	/* check if the memory allocation is successful */
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < size)
	{
		ptr[index] = c; /* initialize each array with a specific char */
		index++;
	}
	return (ptr);
}
