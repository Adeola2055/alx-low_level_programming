/**
 * _memcpy - copies a memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of memory area to be copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (temp);
}
