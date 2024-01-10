#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
    /* Base Case: Check if the current character is the null character */
	if (*s == '\0')
	{
		return (0); /* Length is 0 when the end of the string is reached */
	}
    /* Recursive Call: Move to the next character in the string */
	return (1 + _strlen_recursion(s + 1));
}
