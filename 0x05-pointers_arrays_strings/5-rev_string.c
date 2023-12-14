#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int index1;
	int length = 0;
	int index2 = 0;
	char temp;

	/* find the length of str */
	while (s[length] != '\0')
	{
		length++;
	}
	index1 = length - 1;
	/* reassign each index in reverse order */
	while (index2 < index1)
	{
		temp = s[index1];
		s[index1] = s[index2];
		s[index2] = temp;
		index2++;
		index1--;
	}
}
