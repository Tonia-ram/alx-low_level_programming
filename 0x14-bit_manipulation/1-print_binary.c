#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_op = 1;
	int bit_point = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* locates the most fitting bit */
	while ((n >> bit_point) != 0)
	{
		bit_point++;
	}

	bit_point--;
	/* Output binary digits using else if statements */
	while (bit_point >= 0)
	{
		if ((n & (bit_op << bit_point)) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bit_point--;
	}
}
