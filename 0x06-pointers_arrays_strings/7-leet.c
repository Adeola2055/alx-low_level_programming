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
	char current_char;

	while (str[index] != '\0')
	{
		current_char = str[index];
		if ((current_char == 'a' || current_char == 'A') ||
			(current_char == 'e' || current_char == 'E') ||
			(current_char == 'o' || current_char == 'O') ||
			(current_char == 't' || current_char == 'T') ||
			(current_char == 'l' || current_char == 'L'))
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
		}
		index++;
	}
	return (str);
}
