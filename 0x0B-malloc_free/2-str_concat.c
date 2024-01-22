#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to buffer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *temp = " ";
	int length1 = strlen(s1), length2 = strlen(s2);

	ptr = (char *) malloc((length1 + length2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcat(ptr, s1);
	}
	else
	{
		strcat(ptr, temp);
	}
	if (s2 != NULL)
	{
		strcat(ptr, s2);
	}
	else
	{
		strcat(ptr, temp);
	}
	ptr[length1 + length2] = '\0';
	return (ptr);
}
