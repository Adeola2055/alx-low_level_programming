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
	int len1, i = 0;
	char *ptr;

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
	ptr = (char *) malloc((n + len1 + 1) * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
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
	ptr[len1 + 1 + n] = '\0';
	return (ptr);
}
