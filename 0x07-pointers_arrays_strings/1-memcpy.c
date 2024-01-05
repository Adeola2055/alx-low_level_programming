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
	char *temp_src = src;
	char *temp_dest = dest;

	while (i < n)
	{
		*temp_src = *temp_dest;
		src++;
		dest++;
		i++;
	}
	return (dest);
}
