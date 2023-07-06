#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_ptr;
	unsigned long int bit_pos = 1;

	bit_ptr = (sizeof(unsigned long int) * 8);

	/* check if the index is within the range of bits in the number */
	if (index > bit_ptr)
		return (-1);

	/* create a mask to clear the bit at the given index */
	bit_pos = ~(bit_pos << index);
	*n &= bit_pos; /* use the mask to clear the bit at the given index */
	return (1);
}
