#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: points to string to be searched
 * @needle: points to substring to search for.
 *
 * Return:  a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp_haystack;
	char *temp_needle = needle;

	/* outer loop */
	while (*haystack)
	{
		temp_haystack = haystack;
		while (*needle && *haystack && *needle == *haystack)
		{
			needle++;
			haystack++;
		}
		/* check if the entire substring is found */
		if (*needle == '\0')
		{
			/* Full match found, return pointer to the start of the substring */
			return (temp_haystack);
		}
		/* reset pointers for the next iteration */
		needle = temp_needle;
		haystack = temp_haystack + 1; /*
									   * move haystack to the next character
								       * for the next iteration
									   */
	}
	/* no match found */
	return (NULL);
}
