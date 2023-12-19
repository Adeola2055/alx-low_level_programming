#include "main.h"
/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source of string
 * @n: number of characters to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
