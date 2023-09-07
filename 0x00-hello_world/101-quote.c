#include <unistd.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar,2015-10-19\n";
return (write(1, message, 59) == -1);
}
