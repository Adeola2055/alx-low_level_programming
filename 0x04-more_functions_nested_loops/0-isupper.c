#include "main.h"
/**
 * _isupper - Check if a character is uppercase.
 * @c: character to be checked
 *
 * Return: 0 if success or 1 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
