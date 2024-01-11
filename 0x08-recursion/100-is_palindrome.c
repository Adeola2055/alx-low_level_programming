int is_palindrome_helper(char *s, int start, int end);
/**
 * is_palindrome - if a string is palindrome
 * @s: pointer to a string
 *
 * Return: 1 if success or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, strlen(s) - 1));
}

/**
 * is_palindrome_helper - function to check for palindrome using recursion
 * @s: pointer to string
 * @start: beginning of string
 * @end: end of string
 *
 * Return: 1
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}
