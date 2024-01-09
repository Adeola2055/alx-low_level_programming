/**
 * _strncpy - copies a string
 * @dest: Pointer to destination buffer.
 * @src: Pointer to source string
 * @n: number of byte to be copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp_dest = dest;
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (temp_dest);
}
