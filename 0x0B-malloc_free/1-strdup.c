#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy the string given as a parameter
 * @str: pointer to a string value
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	int length = strlen(str) + 1, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *) malloc(length * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		while (i < length)
		{
			ptr[i] = str[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
