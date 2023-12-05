#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char message[] = "_putchar\n";

	i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}
	return (0);
}
