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
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
