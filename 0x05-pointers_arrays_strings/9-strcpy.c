#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer
 * pointed to by dest.
 *
 * @dest: A pointer to the destination buffer where the string is to be copied.
 * @src: A pointer to the source string.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char temp;
	int index = 0;

	while (src[index] != '\0')
	{
		temp = src[index];
		dest[index] = temp;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
