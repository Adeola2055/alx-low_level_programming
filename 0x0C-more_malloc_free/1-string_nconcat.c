#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copy in second string
 *
 * Return: pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	unsigned int i = 0;
	char *ptr, *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	len1 = strlen(s1);
	ptr = (char *) malloc((n + len1 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	result = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2 && i < n)
	{
		*ptr = *s2;
		ptr++;
		s2++;
		i++;
	}
	*ptr = '\0';
	return (result);
}
