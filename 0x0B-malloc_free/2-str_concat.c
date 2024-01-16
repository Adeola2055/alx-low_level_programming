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
	int length1 = strlen(s1), length2 = strlen(s2);

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	ptr = (char *)malloc(length1 + length2 * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	ptr[length1 + length2] = '\0';
	return (ptr);
}
