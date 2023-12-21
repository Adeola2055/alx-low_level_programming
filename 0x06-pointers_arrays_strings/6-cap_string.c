#include "main.h"
/**
 * toUpperCase - convert lowercase characters to uppercase
 * @c: alphabetical letters
 *
 * Return: uppercase letters
 */
char toUpperCase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}

/**
 * cap_string - capitalize all words of a string
 * @str: string
 *
 * Return: uppercase letters
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if ((str[index] == ',')
			|| (str[index] == ';')
			|| (str[index] == '.') || (str[index] == '!')
			|| (str[index] == '"') || (str[index] == '(')
			|| (str[index] == ')') || (str[index] == '{') || (str[index] == '}')
			|| (str[index] == ' ') || (str[index] == '\t') || (str[index] ==
				'\n'))
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] = toUpperCase(str[index + 1]);
			}
		}
		index++;
	}
	return (str);
}
