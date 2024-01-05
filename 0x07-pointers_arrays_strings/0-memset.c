#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 * @s: pointer to a memory address
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: a pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *original = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (original);
}
