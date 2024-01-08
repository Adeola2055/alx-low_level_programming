/**
 * _strcpy - copies string from src to dest.
 * @dest: Pointer to the buffer
 * @src: pointer to a string value
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp_dest = dest; /* save the original dest pointer */ 
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp_dest);
}
