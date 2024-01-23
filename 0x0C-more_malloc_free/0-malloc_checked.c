#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory bytes to allocate
 *
 * Return: a pointer to the allocated memory on success or 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
