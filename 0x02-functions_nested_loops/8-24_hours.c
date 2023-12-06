#include "main.h"
/**
 * jack_bauer - print 24 hours
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hours = 0;
	int min;

	while (hours <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar((hours / 10) + '0'); /* print tens digit of hours */
			_putchar((hours % 10) + '0'); /* print units digit of hours */
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
