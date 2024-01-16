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
	int i1 = 0, i2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	ptr = (char *)malloc(length1 + length2 * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i1 < length1)
	{
		ptr[i1] = s1[i1];
		i1++;
	}
	while (i2 < length2)
	{
		ptr[length1] = s2[i2];
		length1++;
		i2++;
	}
	ptr[length1] = '\0';
	return (ptr);
}
