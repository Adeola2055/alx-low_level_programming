/**
 * string_toupper - changes lowercase to uppercase
 * @str: pointer to string
 *
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	char *temp = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (temp);
}
