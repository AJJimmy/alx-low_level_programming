#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sos = n ^ m, bits = 0;

	while (sos > 0)
	{
	bits += (sos & 1);
	sos >>= 1;
	}

	return (bits);
}
