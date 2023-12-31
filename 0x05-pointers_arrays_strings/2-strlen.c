/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
