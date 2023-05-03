#include "main.h"
/**
 * factorial - returns factorial of a given value.
 * @n: int value
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
