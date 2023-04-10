#include "main.h"

/**
 * get_bit - returns the bit value at a given index of a number
 * @n: the number to get the bit from
 * @index: the index, starting from 0, of the bit to get
 *
 * Return: the bit value at index index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_point;
	unsigned int bit_pos;

	/* check if given index is within range of the bits in the number */
	bit_pos = (sizeof(unsigned long int) * 8);
	if (!(index < bit_pos))
		return (-1);

	/* get value at index, shift to the right using bitwise AND with 1 */
	bit_point = ((n >> index) & 1);

	/* Return the bit value at the given index */
	return (bit_point);
}
