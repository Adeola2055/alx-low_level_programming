#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string of letters
 *
 * Return: replaced string
 */
char *leet(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] == 'a' || str[index] == 'A')
		{
			str[index] = '4';
		}
		else if (str[index] == 'e' || str[index] == 'E')
		{
			str[index] = '3';
		}
		else if (str[index] == 'o' || str[index] == 'O')
		{
			str[index] = '0';
		}
		else if (str[index] == 't' || str[index] == 'T')
		{
			str[index] = '7';
		}
		else if (str[index] == 'l' || str[index] == 'L')
		{
			str[index] = '1';
		}
		index++;
	}
	return (str);
}
