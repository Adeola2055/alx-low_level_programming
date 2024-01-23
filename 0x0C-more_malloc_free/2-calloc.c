#include <stdlib.h>
#include <stdint.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each elements in bytes
 *
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		while (i < (nmemb * size))
		{
			block[i] = 0;
			i++;
		}
		return (block);
	}
	else
		return (NULL);
}
