#include <stddef.h>
/**
 * print_name - call a function that prints a name
 * @name: name to be print
 * @f: function to be called
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
