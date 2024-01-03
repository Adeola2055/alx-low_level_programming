#include "main.h"
/**
 * rot13 - encodes a string rot13
 * @str: string to be encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *p = str;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int index = 0;

	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			index = 0;
			while (*str != original[index])
			{
				index++;
			}
			*str = rotated[index];
		}
		str++;
	}
	return (p);
}
