#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: specifield number of bytes.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[dest_length + index] = src[index];
		index++;
	}
	dest[dest_length + index] = '\0';
	return (dest);
}
