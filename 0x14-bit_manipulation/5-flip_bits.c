/*
 * File: 5-flip_bits.c
 * Auth: medhat deif
 */

#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: A number.
 * @m: A Number to flip n to.
 * not allowed to use the % or / operators
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int kru = n ^ m, bits = 0;

	while (kru > 0)
	{
		bits += (kru & 1);
		kru >>= 1;
	}

	return (bits);
}
