#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number = 1;
	char *bytePtr = (char *)&number;

	if (*bytePtr == 1)
	{
		return (1); /* little-endian */
	}
	else
	{
		return (0); /* big-endian */
	}
}
