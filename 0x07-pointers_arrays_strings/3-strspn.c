/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string value
 * @accept: pointer to substring of s
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *temp;

	while (*s)
	{
		temp = accept;
		while (*temp)
		{
			if (*s == *temp)
			{
				len++;
				break;
			}
			temp++;
		}
		if (*temp == '\0')
		{
			break;
		}
		s++;
	}
	return (len);
}
