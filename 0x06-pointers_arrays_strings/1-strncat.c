#include "main.h"

/**
* _strncat - concatenate n number of character
*
* @dest: destination pointer
* @src: source pointer
* @n: length of character to concatenate
* Return: destination pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
