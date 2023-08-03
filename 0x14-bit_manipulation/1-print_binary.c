#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * AUTH : Medhat Mohamed Deif ::Hadeer ::2023::
 * Format: see example
 * not allowed to use arrays
 * not allowed to use malloc
 * not allowed to use the % or / operators
 */
void print_binary(unsigned long int n)
{
	int f, num = 0;
	unsigned long int current;

	for (f = 63; f >= 0; f--)
	{
		current = n >> f;

		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}

