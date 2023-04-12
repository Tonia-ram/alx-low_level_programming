#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: the number to be printed in binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int bit_op = n, mask = 1;
	int bit_point = 0;

	while (bit_op > 0)
	{
		bit_point++;
		bit_op >>= 1;
	}
	bit_point -= 1;

	if (bit_point > 0)
		mask = mask << bit_point;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
