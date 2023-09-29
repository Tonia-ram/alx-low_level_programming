#include "main.h"

/**
 * flip_bits - Calculates the number of bits required to flip
 * in order to convert one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits required to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sep_bits = 0;
	/* XOR operation between n and m to identify different bits */
	unsigned long int shift = n ^ m;

	while (shift)
	{ /* Continue as long as shift is not equal to 0 */
		sep_bits += shift & 1; /* Check current bit using bitwise AND with 1 */
		shift >>= 1; /* Shift to the right by 1 bit */
	}
	/* Return the number of bits that need to be flipped */
	return (sep_bits);
}
