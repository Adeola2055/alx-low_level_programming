#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each elements in bytes
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned index = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr =(char *) malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < nmemb)
	{
		*(ptr + index * size) = 0;
		index++;
	}
	return (ptr);
}
