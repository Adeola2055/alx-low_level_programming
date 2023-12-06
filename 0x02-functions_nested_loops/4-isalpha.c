#include <stdio.h>
/**
 * _isalpha - Check if a character is an alphabet or not
 * @c: character to be checked.
 *
 * Return: 1 on success or 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'));
}
