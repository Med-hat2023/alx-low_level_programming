#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * You are allowed to use _putchar
 * AUth : Medhat Mohamed Deif From Egypt
 * Return: On success 1.
 * Don’t forget to push your header file
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
