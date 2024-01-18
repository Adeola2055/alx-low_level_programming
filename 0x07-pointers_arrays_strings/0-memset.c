/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to a buffer
 * @b: constant byte
 * @n: number of byte
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (temp);
}
