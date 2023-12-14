#include "main.h"
/**
 * puts2 - print every other character starting with the  first
 * @str: string
 */
void puts2(char *str)
{
	int index = 0;

	/* iterates until null character */
	while (str[index] != '\0')
	{
		if (index == 0 || index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
