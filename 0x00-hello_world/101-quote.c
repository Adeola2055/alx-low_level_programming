#include <unistd.h>
/**
 *   main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar,\
2015-10-19\n";
	/* Using write system call to print to stderr (file descriptor 2) */
	write(2, message, 59); /* 57 is the length of the message */
	return (1);
}
