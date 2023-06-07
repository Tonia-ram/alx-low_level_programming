#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int number
 * Return: If n does not have a natural square root, the function
 * should return -1
 */

int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - aide function to solve _sqrt_recursion
 * @c: number to determine if it is a square root
 * @i: incrementer to compare against `c`
 * Return: the natural square root, or -1 if none is found
 */

int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
