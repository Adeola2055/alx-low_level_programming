/**
 * _atoi - convert a string to integer
 * @s: string to be converted
 *
 * Return: integers in the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Default positive number */

	/* skips leading characters */
	while (*s == ' ' || (*s == '-' && sign == 1) || (*s == '+' && sign == 1))
	{
		if (*s == '-')
			sign *= -1; /* toggle sign if a minus is encountered */
		s++;
	}
	/* process consecutive digits */
	while (*s >= '0' && *s <= '9')
	{
		/* checks for overflow before updating result */
		if (result > (2147483647 - (*s - '0')) / 10)
		{
			/* handle overflow */
			return sign == 1 ? 2147483647 : -2147483648;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;
}
