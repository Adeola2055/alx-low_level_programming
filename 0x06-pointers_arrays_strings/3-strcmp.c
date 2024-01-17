/**
 * _strcmp - compares two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 0 if both strings are same ordiffernces in ascii values otherwise
 */
int _strcmp(char *s1, char *s2)
{
	/* compare each string */
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
		return (*s1 - *s2);
		}
	}
	/* check if both strings have reach null terminator */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0); /* both strings are equal */
	}
	/* if one string is shorter than the other */
	return (*s1 - *s2);
}
