#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: a pointer to the memory to be filled
 * @src: a pointer to the source memory area
 * @n: number of byte to be copied
 *
 * Return: return a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
