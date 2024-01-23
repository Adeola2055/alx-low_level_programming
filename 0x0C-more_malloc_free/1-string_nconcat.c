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
	int len1 = strlen(s1);
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc((len1 + n + 1) * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
