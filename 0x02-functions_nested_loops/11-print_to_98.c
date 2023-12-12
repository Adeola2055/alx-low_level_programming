#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: Number
 *
 * Return: Void
 */
void sub(int n);

void print_to_98(int n)
{
   if (n <= 98)
	{
        while (n <= 98)
		{
			sub(n);
            if (n != 98)
			{
                printf(", ");
            }
            n++;
        }
    } 
	else
	{
        while (n >= 98)
		{
            sub(n);
            if (n != 98)
			{
                printf(", ");
            }
            n--;
        }
    }
    printf("\n");
}

/**
 * sub - check if a number is negative and handle digit that a    in't single.
 * @n: number.
 * Return: Void
 */

void sub(int n)
{
    if (n < 0)
	{
        printf("-");
        n = -n;
    }

    /* Handle the case where the number has more than one digit */
    if (n >= 10)
	{
        printf("%d%d", n / 10, n % 10);
    } else {
        printf("%d", n);
    }
}
