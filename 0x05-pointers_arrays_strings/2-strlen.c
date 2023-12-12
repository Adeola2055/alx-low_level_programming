#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: argument of _strlen
 *
 * Return: length of *s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
