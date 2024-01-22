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

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *) malloc((strlen(str) + 1) * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			strcpy(ptr, str);
		}
	}
	return (ptr);
}
