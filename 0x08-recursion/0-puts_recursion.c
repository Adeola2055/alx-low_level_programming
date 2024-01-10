#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: Pointer to a string
 */
void _puts_recursion(char *s)
{
	/* base case: check if the current character is the null character */
	if (!*s)
	{
		_putchar('\n');
		/* terminate the recursion */
		return;
	}
	/* print the current character */
	_putchar(*s);
	/**
	 * Recursive case: call the function with the next
	 * character in the string
	 */
	_puts_recursion(s + 1);
}
