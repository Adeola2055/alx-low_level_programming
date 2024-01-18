#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to memory area
 * @c: character to be located
 *
 * Return: pointer to first occurence of the character in c or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		while (*s)
		{
			s++;
		}
		return (s);
	}
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
