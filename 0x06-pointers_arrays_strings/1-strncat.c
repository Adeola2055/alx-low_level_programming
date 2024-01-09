/**
 * _strncat - concatenates two string
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: number of bytes to be copied at most
 *
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, length = 0;
	char *temp_dest = dest;

	/* get length of dest */
	while (dest[length] != '\0')
	{
		length++;
	}
	/* concatenate src to dest */
	while (index < n && src[index] != '\0')
	{
		dest[length] = src[index];
		length++;
		index++;
	}
	dest[length] = '\0';
	return (temp_dest);
}
