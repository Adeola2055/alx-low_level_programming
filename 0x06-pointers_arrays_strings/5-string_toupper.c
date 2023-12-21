#include "main.h"
/**
 * toUpperCase - changes lowercase to uppercase
 * @c: the character to be change if lowercase
 *
 * Return: uppercase characters
 */
char toUpperCase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		/**
		  *  Convert to uppercase by
		  *  subtracting the ASCII difference
		 */
		return (c - ('a' - 'A'));
	}
	else
	{
		/* Return unchanged if not lowercase letter */
		return (c);
	}
}

/**
 * string_toupper - convert lowercase letters of a string to uppercase
 * @str: string of characters
 *
 * Return: uppercase letters of str
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		str[index] = toUpperCase(str[index]);
		index++;
	}
	return (str);
}
