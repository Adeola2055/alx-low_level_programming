#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: a pointer to the string
 * @c: character
 *
 * Return: a pointer at first occurence of c
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (*s)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
		index++;
	}
	return (NULL);
}
