#include "main.h"
/**
 * _strcat - concatenates to strings
 * @dest: first string
 * @src: second string.
 *
 * Return: a pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_length;

	/* get the length of dest */
	while (dest[index] != '\0')
	{
		index++;
	}
	dest_length = index;
	index = 0;
	/* concatenate src to dest */
	while (src[index] != '\0')
	{
		dest[dest_length + index] = src[index];
		index++;
	}
	dest[dest_length + index] = '\0';
	return (dest);
}
