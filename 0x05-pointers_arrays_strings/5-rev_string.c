/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string value.
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char temp;


	/* get length of string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* reverse string */
	length -= 1;
	while (index < length)
	{
		temp = s[length];
		s[length] = s[index];
		s[index] = temp;
		index++;
		length--;
	}
}
