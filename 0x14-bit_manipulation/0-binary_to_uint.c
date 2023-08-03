/*
 * Auth: Medhat Mohamed Deif
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 *         where b is pointing to a string of 0 and 1 chars
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nam = 0, mult = 1;
	int lee;

	if (b == '\0')
		return (0);

	for (lee = 0; b[lee];)
		lee++;

	for (lee -= 1; lee >= 0; lee--)
	{
		if (b[lee] != '0' && b[lee] != '1')
			return (0);

		nam += (b[lee] - '0') * mult;
		mult *= 2;
	}

	return (nam);
}
