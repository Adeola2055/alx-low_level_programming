#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				for (digit4 = 0; digit4 < 10; digit4++)
				{
				if (digit1 * 10 + digit2 < digit3 * 10 + digit4)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(' ');
					putchar(digit3 + '0');
					putchar(digit4 + '0');
					if (digit1 != 9 || digit2 != 8 || digit3 != 9 || digit4 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
