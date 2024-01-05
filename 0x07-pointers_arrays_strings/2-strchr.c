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
	char *res;

	while (*s)
	{
		if (s[index] == c)
		{
			res = &s[index];
			return (res);
		}
		index++;
	}
	return (NULL);
}
