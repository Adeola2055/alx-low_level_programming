#include "main.h"
/**
 * leet - encode a string to 1337
 * @str: string to be encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
    char *r = str;
    int i = 0;
    char key[] = {'a', 'e','o', 't', 'l'};
    char value[] = {'4', '3', '0', '7', '1'};

    while (*str) 
	{
        while (i < 5) 
		{
            if ((*str == key[i]) || (*str == key[i] - 32)) 
			{
                *str = value[i];
                break;
            } 
			else 
			{
                i++;
            }
        }
        i = 0;
        str++;
    }

    return (r);
}

