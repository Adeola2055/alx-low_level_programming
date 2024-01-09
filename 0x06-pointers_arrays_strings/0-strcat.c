/**
 * _strcat - Appends two string together.
 * @dest: pointer to destination string
 * @src:  Pointer to source string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	char *temp_dest = dest;

	/* get length of dest */
	while (dest[length] != '\0')
	{
		length++;
	}
	
	/* append src to dest */
	while (*src)
	{
		dest[length] = *src;
		length++;
		src++;
	}
	dest[length] = '\0';
	return (temp_dest);
}
