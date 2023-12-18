#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generateRandomChar - generate random character at each runtime
 *
 * Return: char generated
 */
char generateRandomChar(void)
{
	/* characters that can be part of the password */
	char charset[] =
					"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int index = rand() % (sizeof(charset) - 1);

	return (charset[index]);
}

/**
 * generateRandomPassword - generate password
 * @password: character to be included in the password
 * @length: length of password
 */
void generateRandomPassword(char *password, int length)
{
	int i = 0;

	while (i < length)
	{
		password[i] = generateRandomChar();
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/* seed random number generator with current time */
	srand((unsigned int)time(NULL));

	/* Generate a random password */
	char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */

	generateRandomPassword(password, PASSWORD_LENGTH);
	password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password */

	printf("%s\n", password);
	return (0);
}
